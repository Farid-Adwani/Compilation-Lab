/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_BUILD_SYNTAXIQUEANALYSER_TAB_H_INCLUDED
# define YY_YY_BUILD_SYNTAXIQUEANALYSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CLASS = 258,
    PUBLIC = 259,
    STATIC = 260,
    VOID = 261,
    MAIN = 262,
    EXTENDS = 263,
    RETURN = 264,
    IF = 265,
    ELSE = 266,
    WHILE = 267,
    THIS = 268,
    NEW = 269,
    LENGTH = 270,
    PRINTLN = 271,
    IDENT = 272,
    ACC_OUV = 273,
    ACC_FER = 274,
    PAR_OUV = 275,
    PAR_FER = 276,
    OPPAFFECT = 277,
    PT_VIRG = 278,
    BOOL = 279,
    INT = 280,
    TYPE = 281,
    ERROR = 282,
    STRINGARR = 283,
    BRAK_OUV = 284,
    BRAK_FER = 285,
    VIRG = 286,
    OPP = 287,
    DOT = 288,
    OPPNOT = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "./src/syntaxiqueAnalyser.y"

   char* stringValue;
   char** stringsValues;

#line 93 "./build/syntaxiqueAnalyser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BUILD_SYNTAXIQUEANALYSER_TAB_H_INCLUDED  */
