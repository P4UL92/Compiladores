/* Analizador sintactico para reconocer sentencias  */

/* Sección DEFINICIONES */
%{
#include <stdio.h>
/*#define YYERROR_VERBOSE*/

int yylex();
int yyerror(char *s);
%}

/* Sección REGLAS */
%token PACKAGE CLASS FUNCTION SUBFUNCTION IF ELSE DO WHILE FOR VERDADERO FALSO BREAKER BINDER OPERATOR APPEND ADD SUBSTRACT COMPARATOR ASSIGNATION LINKER OPENCLAUSE CLOSECLAUSE OPENCONTROLLER CLOSECONTROLLER STRING CHAR STARTER BYTE SHORT INT LONG FLOAT DOUBLE BOOLEAN CHARVAR STRINGVAR FLOATNUMBER NUMBER ID SPACE NEXTLINE

%%

programa: paquete clase
	| clase
	;

paquete: PACKAGE ID APPEND ID APPEND ID BREAKER
	| PACKAGE ID APPEND ID BREAKER
	| PACKAGE ID BREAKER
	;

clase: CLASS ID OPENCLAUSE punto_entrada CLOSECLAUSE
	| CLASS ID OPENCLAUSE CLOSECLAUSE
	;

punto_entrada: STARTER OPENCLAUSE sentencias CLOSECLAUSE
	;

sentencias: sentencias sentencia
	| sentencia
	;

sentencia: asignacion
	| comparacion
	| metodo
	| iterador
	| incrementar BREAKER
	| operaciones BREAKER
	| ID ASSIGNATION operaciones BREAKER
	;

operaciones: operaciones operacion
	| ID
	| NUMBER
	| FLOATNUMBER
	;

operacion: OPERATOR ID
	| OPERATOR NUMBER
	| OPERATOR FLOATNUMBER
	;

iterador: FOR iterador_header OPENCLAUSE sentencias CLOSECLAUSE {printf("La sentencia es valida: para{}\n")}
	| WHILE condiciones OPENCLAUSE sentencias CLOSECLAUSE {printf("La sentencia es valida: mientras{}\n")}
	| DO OPENCLAUSE sentencias CLOSECLAUSE WHILE OPENCONTROLLER condiciones CLOSECONTROLLER BREAKER {printf("La sentencia es valida: hacer - mientras{}\n")}
	;

iterador_header: OPENCONTROLLER asignacion condiciones BREAKER incrementar CLOSECONTROLLER
	| OPENCONTROLLER BREAKER condiciones BREAKER incrementar CLOSECONTROLLER
	| OPENCONTROLLER BREAKER condiciones BREAKER CLOSECONTROLLER
	;

incrementar: ID ADD
	| ID SUBSTRACT
	;

metodo:FUNCTION submetodo BREAKER
	;

submetodo: APPEND SUBFUNCTION OPENCONTROLLER ID CLOSECONTROLLER
	| APPEND SUBFUNCTION OPENCONTROLLER CLOSECONTROLLER
	| APPEND SUBFUNCTION OPENCONTROLLER STRING BINDER ID CLOSECONTROLLER
	| APPEND SUBFUNCTION OPENCONTROLLER STRING CLOSECONTROLLER
	;

asignacion: declaracion ASSIGNATION tipo BREAKER {printf("La sentencia es valida: asignacion-declaracion num\n");}
	| declaracion BREAKER {printf("La sentencia es valida: dec\n") ; }
	| ID ASSIGNATION tipo BREAKER {printf("La sentencia es valida: asig= n\n") ; }
	;

tipo: NUMBER
	| FLOATNUMBER
	| STRING
	| CHAR
	| VERDADERO
	| FALSO
	| ID

declaracion: BYTE ID
	| INT ID
	| LONG ID
	| FLOAT ID
	| DOUBLE ID
	| BOOLEAN ID
	| CHARVAR ID
	| STRINGVAR ID
	;

comparacion: si {printf("La sentencia es valida: if\n"); }
	| si caso_contrario {printf("La sentencia es valida: if-else\n"); }
	| si si_contrario {printf("La sentencia es valida: if-else if\n"); }
	| si si_contrario caso_contrario {printf("La sentencia es valida: if-(else if)-else\n"); }
	;

si: IF OPENCONTROLLER condiciones CLOSECONTROLLER OPENCLAUSE sentencias CLOSECLAUSE
	| IF OPENCONTROLLER condiciones CLOSECONTROLLER OPENCLAUSE CLOSECLAUSE
	;

caso_contrario:ELSE OPENCLAUSE sentencias CLOSECLAUSE
	| ELSE OPENCLAUSE CLOSECLAUSE
	;

si_contrario: si_contrario ELSE si
	| ELSE si
	;

condiciones: condiciones LINKER condicion
	| condicion
	;

condicion: ID COMPARATOR ID 
	| NUMBER COMPARATOR NUMBER 
 	| NUMBER COMPARATOR ID 
 	| NUMBER COMPARATOR FLOATNUMBER 
 	| FLOATNUMBER COMPARATOR NUMBER 
 	| FLOATNUMBER COMPARATOR FLOATNUMBER 
 	| FLOATNUMBER COMPARATOR ID 
	| ID COMPARATOR	NUMBER {printf("La sentencia es valida: condicion: id - number\n");}
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
