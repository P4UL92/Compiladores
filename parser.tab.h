
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PACKAGE = 258,
     CLASS = 259,
     FUNCTION = 260,
     SUBFUNCTION = 261,
     IF = 262,
     ELSE = 263,
     DO = 264,
     WHILE = 265,
     FOR = 266,
     VERDADERO = 267,
     FALSO = 268,
     BREAKER = 269,
     BINDER = 270,
     OPERATOR = 271,
     APPEND = 272,
     ADD = 273,
     SUBSTRACT = 274,
     COMPARATOR = 275,
     ASSIGNATION = 276,
     LINKER = 277,
     OPENCLAUSE = 278,
     CLOSECLAUSE = 279,
     OPENCONTROLLER = 280,
     CLOSECONTROLLER = 281,
     STRING = 282,
     CHAR = 283,
     STARTER = 284,
     BYTE = 285,
     SHORT = 286,
     INT = 287,
     LONG = 288,
     FLOAT = 289,
     DOUBLE = 290,
     BOOLEAN = 291,
     CHARVAR = 292,
     STRINGVAR = 293,
     FLOATNUMBER = 294,
     NUMBER = 295,
     ID = 296,
     SPACE = 297,
     NEXTLINE = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


