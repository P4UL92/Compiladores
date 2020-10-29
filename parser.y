/* Analizador sintactico para reconocer sentencias  */

/* Sección DEFINICIONES */
%{
#include <stdio.h>
/*#define YYERROR_VERBOSE*/

int errores = 0;
int line = 1;
int yylex();
int yyerror(char *s);
void Errors(char* input);
void nextline();
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
	/* errores */
	| PACKAGE ID APPEND ID APPEND ID {yyerror("Error, se espera ; al final de la linea\n");errores++;}
	| PACKAGE ID APPEND ID {yyerror("Error, se espera ; al final de la linea\n");errores++;}
	| PACKAGE ID {yyerror("Error, se espera ; al final de la linea\n");errores++;}
	;

clase: CLASS ID OPENCLAUSE punto_entrada CLOSECLAUSE
	| CLASS ID OPENCLAUSE CLOSECLAUSE
	/* errores */

	| CLASS ID OPENCLAUSE punto_entrada {yyerror("Error, se espera cerradura de llaves }\n");errores++;}
	| CLASS ID OPENCLAUSE {yyerror("Error, se espera cerradura de llaves }\n");errores++;}
	;

punto_entrada: STARTER OPENCLAUSE sentencias CLOSECLAUSE
	/*errores */
	| STARTER OPENCLAUSE sentencias {yyerror("Error, se espera cerradura de llaves }\n");errores++;}
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
	/* errores*/
	| incrementar {yyerror("Error, se espera ; al final de la linea\n");errores++;}
	| operaciones {yyerror("Error, se espera ; al final de la linea\n");errores++;}
	| ID ASSIGNATION operaciones {yyerror("Error, se espera ; al final de la linea\n");errores++;}
	;

operaciones: operaciones operacion
	| ID
	| NUMBER
	| FLOATNUMBER
	;

operacion: OPERATOR ID
	| OPERATOR NUMBER
	| OPERATOR FLOATNUMBER
	/*Errores falta operando */
	| OPERATOR {yyerror("Error, se espera un operando \n");errores++;}
	;

iterador: FOR iterador_header OPENCLAUSE sentencias CLOSECLAUSE
	| WHILE OPENCONTROLLER condiciones CLOSECONTROLLER OPENCLAUSE sentencias CLOSECLAUSE
	| DO OPENCLAUSE sentencias CLOSECLAUSE WHILE OPENCONTROLLER condiciones CLOSECONTROLLER BREAKER
	/*Errores de cerradura*/
	| DO OPENCLAUSE sentencias CLOSECLAUSE WHILE OPENCONTROLLER condiciones CLOSECONTROLLER {yyerror("La sentencia: hacer - mientras{} necesita cerradura ; \n");errores++;}

	| FOR iterador_header OPENCLAUSE sentencias {yyerror("La sentencia: para{} se espera cierre de llaves } \n");errores++;}
	| WHILE condiciones OPENCLAUSE sentencias {yyerror("La sentencia: mientras{} se espera cierre de llaves } \n");errores++;}

	| DO OPENCLAUSE sentencias WHILE OPENCONTROLLER condiciones CLOSECONTROLLER BREAKER {yyerror("La sentencia hacer ? - mientras{} \n");errores++;}
	| DO OPENCLAUSE sentencias CLOSECLAUSE WHILE OPENCONTROLLER condiciones BREAKER {yyerror("La sentencia hacer - mientras{} ? \n");errores++;}

	| DO OPENCLAUSE sentencias WHILE OPENCONTROLLER condiciones CLOSECONTROLLER {yyerror("La sentencia hacer ? - mientras{} necesita cerradura ;\n");errores++;}
	| DO OPENCLAUSE sentencias CLOSECLAUSE WHILE OPENCONTROLLER condiciones  {yyerror("La sentencia hacer - mientras{} ?  necesita cerradura ;\n");errores++;}
	;

iterador_header: OPENCONTROLLER asignacion condiciones BREAKER incrementar CLOSECONTROLLER
	| OPENCONTROLLER BREAKER condiciones BREAKER incrementar CLOSECONTROLLER
	| OPENCONTROLLER BREAKER condiciones BREAKER CLOSECONTROLLER
	/* Errores*/
	| OPENCONTROLLER asignacion condiciones BREAKER incrementar {yyerror("Error, se espera cerradura de ) \n");errores++;}
	| OPENCONTROLLER BREAKER condiciones BREAKER incrementar {yyerror("Error, se espera cerradura de ) \n");errores++;}
	| OPENCONTROLLER BREAKER condiciones BREAKER {yyerror("Error, se espera cerradura de ) \n");errores++;}
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
	/*Errores*/
	| APPEND SUBFUNCTION OPENCONTROLLER ID {yyerror("Error, se espera cerradura de ) \n");errores++;}
	| APPEND SUBFUNCTION OPENCONTROLLER {yyerror("Error, se espera cerradura de ) \n");errores++;}
	| APPEND SUBFUNCTION OPENCONTROLLER STRING BINDER ID {yyerror("Error, se espera cerradura de ) \n");errores++;}
	| APPEND SUBFUNCTION OPENCONTROLLER STRING {yyerror("Error, se espera cerradura de ) \n");errores++;}
	;

asignacion: declaracion ASSIGNATION tipo BREAKER
	| declaracion BREAKER
	| ID ASSIGNATION tipo BREAKER
	/*errores */
	| declaracion ASSIGNATION tipo {yyerror("Error, se espera ; al final de la linea\n");errores++;}
	| declaracion {yyerror("Error, se espera ; al final de la linea\n");errores++;}
	| ID ASSIGNATION tipo {yyerror("La sentencia es valida: asig= n\n");errores++;} 
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

comparacion: si
	| si caso_contrario
	| si si_contrario
	| si si_contrario caso_contrario
	/*Errores */
	| ELSE OPENCONTROLLER condiciones CLOSECONTROLLER OPENCLAUSE sentencias CLOSECLAUSE {yyerror("Error, una comparación debe empezar con 'si' \n");errores++;}
	| ELSE OPENCONTROLLER condiciones CLOSECONTROLLER OPENCLAUSE CLOSECLAUSE {yyerror("Error, una comparación debe empezar con 'si' \n");errores++;}
	| si_contrario {yyerror("Error, una comparación debe empezar con 'si' \n");errores++;}
	| caso_contrario {yyerror("Error, una comparación debe empezar con 'si' \n");errores++;}
	;

si: IF OPENCONTROLLER condiciones CLOSECONTROLLER OPENCLAUSE sentencias CLOSECLAUSE
	| IF OPENCONTROLLER condiciones CLOSECONTROLLER OPENCLAUSE CLOSECLAUSE
	/*Errores */
	| IF OPENCONTROLLER condiciones CLOSECONTROLLER OPENCLAUSE sentencias {yyerror("Error, faltan cerraduras de llaves \n");errores++;}
	| IF OPENCONTROLLER condiciones CLOSECONTROLLER OPENCLAUSE {yyerror("Error, faltan cerraduras de llaves\n");errores++;}

	| IF OPENCONTROLLER condiciones OPENCLAUSE sentencias CLOSECLAUSE {yyerror("Error, faltan cerraduras de parentesis\n");errores++;}
	| IF OPENCONTROLLER condiciones OPENCLAUSE CLOSECLAUSE {yyerror("Error, faltan cerraduras de parentesis\n");errores++;}
	;

caso_contrario:ELSE OPENCLAUSE sentencias CLOSECLAUSE
	| ELSE OPENCLAUSE CLOSECLAUSE
	/*errores*/
	| ELSE OPENCLAUSE sentencias {yyerror("Error, faltan cerraduras de llaves\n");errores++;}
	| ELSE OPENCLAUSE {yyerror("Error, faltan cerraduras de llaves");errores++;}
	;

si_contrario: si_contrario ELSE si
	| ELSE si
	;

condiciones: condiciones LINKER condicion
	| condicion
	/*Errores*/
	| condiciones  condicion {yyerror("Error, no se encontro conector\n");errores++;}
	;

condicion: ID COMPARATOR ID 
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
    Errors(argv[1]);
    return 0;
}

int yyerror(char *s) {
    fprintf(stderr, "Error linea %d: %s\n", line, s);
    errores++;
    return 0;
}

void Errors(char* input){
    if(errores == 0){
        printf("======PROGRAMA VÁLIDO======\n");
        char run[100];
        strcpy(run, "flex traductor.l");
        int result = system(run);
        if (result == 0){
            memset(run, 0, sizeof run);
            strcpy(run, "gcc -o traductor lex.yy.c");
            result = system(run);
            if(result == 0){
                memset(run, 0, sizeof run);
                strcpy(run, "./traductor < ");
                strcat(run, input);
                system(run);
            }
        }
    }
}

void nextline() {
	line++;
}
