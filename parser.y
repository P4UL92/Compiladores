/* Analizador sintactico para reconocer sentencias  */

/* Sección DEFINICIONES */
%{
#include <stdio.h>
/*#define YYERROR_VERBOSE*/

int yylex();
int yyerror(char *s);
%}

/* Sección REGLAS */
%token PACKAGE CLASS FUNCTION SUBFUNCTION IF ELSE DO EVALUATOR VERDADERO FALSO BREAKER BINDER OPERATOR APPEND ADD SUBSTRACT COMPARATOR ASIGNATION LINKER OPENCLAUSE CLOSECLAUSE OPENCONTROLLER CLOSECONTROLLER STRING CHAR STARTER BYTE SHORT INT LONG FLOAT DOUBLE BOOLEAN CHARVAR STRINGVAR NUMBER ID SPACE NEXTLINE

%%

sentencias: sentencia sentencias
	| sentencia	
	;

sentencia: asignacion
	| comparacion
	;

asignacion: declaracion ASIGNATION NUMBER BREAKER {printf("La sentencia es valida: asignacion-declaracion num\n");}
	| declaracion ASIGNATION ID BREAKER {printf("La sentencia es valida: asignacion-declaracion var\n");}
	| declaracion BREAKER {printf("La sentencia es valida: dec\n") ; }
	| ID ASIGNATION NUMBER BREAKER {printf("La sentencia es valida: asig= n\n") ; }
	| ID ASIGNATION ID BREAKER {printf("La sentencia es valida: asig = id\n") ; }
	;

declaracion: INT ID { }
	;


comparacion: IF OPENCONTROLLER comparar CLOSECONTROLLER OPENCLAUSE asignacion CLOSECLAUSE {printf("La sentencia es valida: if{}\n"); }

	| IF OPENCONTROLLER comparar CLOSECONTROLLER OPENCLAUSE asignacion CLOSECLAUSE ELSE OPENCLAUSE asignacion CLOSECLAUSE {printf("La sentencia es valida: if{}-else{}\n"); }
	| IF OPENCONTROLLER comparar CLOSECONTROLLER OPENCLAUSE asignacion CLOSECLAUSE ELSE OPENCLAUSE CLOSECLAUSE {printf("La sentencia es valida: if{}-else\n"); }
	| IF OPENCONTROLLER comparar CLOSECONTROLLER OPENCLAUSE  CLOSECLAUSE ELSE OPENCLAUSE CLOSECLAUSE {printf("La sentencia es valida: if-else\n"); }
	;

comparar: ID COMPARATOR ID 
	| NUMBER COMPARATOR NUMBER 
 	| NUMBER COMPARATOR ID 
	| ID COMPARATOR	NUMBER 
	;


%%

/* Sección CODIGO USUARIO */
FILE *yyin;
int main(int argc, char **argv) {
yyin = fopen(argv[1],"r");
    yyparse();
    
    return 0;
}

int yyerror(char *s) {
    fprintf(stderr, "A.Sintactico: %s\n", s);
    return 0;
}
