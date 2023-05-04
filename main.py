import tkinter as tk
import subprocess
import os

os.system("./run.sh")


def load_file():
    with open("./javaFiles/Exemple2.java", "r") as f:
        program = f.read()
    text_field.delete("1.0", tk.END)
    text_field.insert(tk.END, program)

def run_command():
    # Delete contents of result_field
    result_field.delete('1.0', tk.END)

    program = text_field.get("1.0", 'end-1c')
    with open("test.txt", "w") as f:
        f.write(program)

    command = ['./build/a.out']
    with open("test.txt", "r") as f:
        output = subprocess.run(command, stdin=f, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, universal_newlines=True)

    # Center align the text
    result_field.tag_configure("center", justify='center')
    
    if "DONE WITH NO ERRORS" in output.stdout:
        text_field.tag_remove("error", "1.0", tk.END)
        result_field.configure(bg="green")
    else:
        
        result_field.configure(bg="red")
        error_lines = [int(s.split(" ")[3]) for s in output.stdout.split("\n") if "Error on line" in s]
        # Highlight the lines with errors
        text_field.tag_remove("error", "1.0", tk.END)
        for line_num in error_lines:
            print(line_num)
            text_field.tag_configure("error", background="red")
            text_field.tag_add("error", str(line_num)+".0", str(line_num)+".end")

    
    result_field.insert(tk.END, output.stdout, "center")



root = tk.Tk()
root.title("Mini Java Compiler")

# set window size and position
window_width = 800
window_height = root.winfo_screenheight()
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()
x = int((screen_width/2) - (window_width/2))
y = int((screen_height/2) - (window_height/2))
root.geometry("{}x{}+{}+{}".format(window_width, window_height, x, y))

# create label for program entry
text_label = tk.Label(root, text="Enter Program", font=("Arial", 14))
text_label.pack(pady=(20, 0))

load_button = tk.Button(root, text="Load File", font=("Arial", 14), command=load_file)
load_button.pack()

# create text field for program entry
text_field = tk.Text(root, width=80, height=20, font=("Arial", 12))
text_field.pack(padx=20, pady=(0, 20), fill=tk.BOTH, expand=True)
text_field.config(wrap=tk.NONE)
scrollbar1 = tk.Scrollbar(text_field, orient="vertical", command=text_field.yview)
scrollbar1.pack(side=tk.RIGHT, fill=tk.Y)
text_field.config(yscrollcommand=scrollbar1.set)



# create button for compilation
run_button = tk.Button(root, text="COMPILE", font=(
    "Arial", 14), command=run_command)
run_button.pack()



# create label for results
result_label = tk.Label(root, text="Results:", font=("Arial", 14))
result_label.pack(pady=(20, 0))

# create text field for results
result_field = tk.Text(root, width=80, height=20, font=("Arial", 12))
result_field.pack(padx=20, fill=tk.BOTH, expand=True)
result_field.config(wrap=tk.NONE)
scrollbar2 = tk.Scrollbar(result_field, orient="vertical", command=result_field.yview)
scrollbar2.pack(side=tk.RIGHT, fill=tk.Y)
result_field.config(yscrollcommand=scrollbar2.set)

root.mainloop()
