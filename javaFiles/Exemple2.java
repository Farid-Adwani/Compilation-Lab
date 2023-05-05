/* ===========================================================
  CECI EST UN COMMENTAIRE
  ============================================================ */

class Factorial {
    public static void main(String[] a) {
        System.out.println(new Fac().ComputeFac(10));
    }
}

/*
 * ====================================================
 * Classe Fac
 * ====================================================
 */

class Fac {
    public int ComputeFac(int num) {
        int num_aux;
        if (num < 1) {
            num_aux = 1;
        } else {
            num_aux = num * (this.ComputeFac(num));
        }
        return num_aux;
    }
}
