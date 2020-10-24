/* Analizador sintactico para reconocer sentencias  */

/* Sección DEFINICIONES */
%{
#include <stdio.h>
/*#define YYERROR_VERBOSE*/

int yylex();
int yyerror(char *s);
%}

/* Sección REGLAS */
%token PACKAGE CLASS FUNCTION SUBFUNCTION IF ELSE DO EVALUATOR VERDADERO FALSO BREAKER BINDER OPERATOR APPEND ADD SUBSTRACT COMPARATOR ASIGNATION LINKER OPENCLAUSE CLOSECLAUSE OPENCONTROLLER CLOSECONTROLLER STRING CHAR STARTER BYTE SHORT INT LONG FLOAT DOUBLE BOOLEAN CHARVAR STRINGVAR FLOATNUMBER NUMBER ID SPACE NEXTLINE

%%

programa: paquete clase
	| clase
	;

paquete: PACKAGE ID APPEND ID APPEND ID BREAKER
	;

clase: CLASS ID OPENCLAUSE punto_entrada CLOSECLAUSE
	;

punto_entrada: STARTER OPENCLAUSE sentencias CLOSECLAUSE
	;

sentencias: sentencias sentencia
	| sentencia
	;

sentencia: asignacion
	| comparacion
	| metodo
	;

metodo:FUNCTION APPEND submetodo BREAKER
	;

submetodo: APPEND SUBFUNCTION OPENCONTROLLER ID CLOSECONTROLLER
	| APPEND SUBFUNCTION OPENCONTROLLER CLOSECONTROLLER
	| APPEND SUBFUNCTION OPENCONTROLLER STRING BINDER ID CLOSECONTROLLER
	;

asignacion: declaracion ASIGNATION NUMBER BREAKER {printf("La sentencia es valida: asignacion-declaracion num\n");}
	| declaracion ASIGNATION FLOATNUMBER BREAKER {printf("La sentencia es valida: asignacion-declaracion float num\n");}
	| declaracion ASIGNATION STRING BREAKER {printf("La sentencia es valida: asignacion-declaracion num\n");}
	| declaracion ASIGNATION CHAR BREAKER {printf("La sentencia es valida: asignacion-declaracion num\n");}
	| declaracion ASIGNATION VERDADERO BREAKER {printf("La sentencia es valida: asignacion-declaracion num\n");}
	| declaracion ASIGNATION FALSO BREAKER {printf("La sentencia es valida: asignacion-declaracion num\n");}
	| declaracion ASIGNATION ID BREAKER {printf("La sentencia es valida: asignacion-declaracion var\n");}
	| declaracion BREAKER {printf("La sentencia es valida: dec\n") ; }
	| ID ASIGNATION NUMBER BREAKER {printf("La sentencia es valida: asig= n\n") ; }
	| ID ASIGNATION FLOATNUMBER BREAKER {printf("La sentencia es valida: asig= n\n") ; }
	| ID ASIGNATION STRING BREAKER {printf("La sentencia es valida: asig= n\n") ; }
	| ID ASIGNATION CHAR BREAKER {printf("La sentencia es valida: asig= n\n") ; }
	| ID ASIGNATION BOOLEAN BREAKER {printf("La sentencia es valida: asig= n\n") ; }
	| ID ASIGNATION ID BREAKER {printf("La sentencia es valida: asig = id\n") ; }
	;

declaracion: BYTE ID
	| INT ID
	| LONG ID
	| FLOAT ID
	| DOUBLE ID
	| BOOLEAN ID
	| CHARVAR ID
	| STRINGVAR ID
	;


comparacion: IF OPENCONTROLLER comparar CLOSECONTROLLER OPENCLAUSE sentencias CLOSECLAUSE {printf("La sentencia es valida: if{}\n"); }
	| IF OPENCONTROLLER comparar CLOSECONTROLLER OPENCLAUSE sentencias CLOSECLAUSE ELSE OPENCLAUSE sentencias CLOSECLAUSE {printf("La sentencia es valida: if{}-else{}\n"); }
	| IF OPENCONTROLLER comparar CLOSECONTROLLER OPENCLAUSE sentencias CLOSECLAUSE ELSE OPENCLAUSE CLOSECLAUSE {printf("La sentencia es valida: if{}-else\n"); }
	| IF OPENCONTROLLER comparar CLOSECONTROLLER OPENCLAUSE CLOSECLAUSE ELSE OPENCLAUSE sentencias CLOSECLAUSE {printf("La sentencia es valida: if-else{}\n"); }
	| IF OPENCONTROLLER comparar CLOSECONTROLLER OPENCLAUSE  CLOSECLAUSE ELSE OPENCLAUSE CLOSECLAUSE {printf("La sentencia es valida: if-else\n"); }
	;

comparar: ID COMPARATOR ID 
	| NUMBER COMPARATOR NUMBER 
 	| NUMBER COMPARATOR ID 
 	| NUMBER COMPARATOR FLOATNUMBER 
 	| FLOATNUMBER COMPARATOR NUMBER 
 	| FLOATNUMBER COMPARATOR FLOATNUMBER 
 	| FLOATNUMBER COMPARATOR ID 
	| ID COMPARATOR	NUMBER 
	| ID COMPARATOR	FLOATNUMBER 
	| ID submetodo
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
