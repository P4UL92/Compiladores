/* Proyecto para reconocer un programa escrito en lenguaje Java(Español) */

/* Sección DEFINICIONES */
%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "parser.tab.h" 


int agregar_token(int tipo, char *palabra);
int buscar_token(char *palabra, int tipo);

int estado = 0;


%}

PACKAGE				(paquete)
CLASS				(clase)
FUNCTION			(Salida)
SUBFUNCTION			(imprimir(Ln)?|formato|igual|aTexto)
IF				(si)
ELSE				(casoContrario)
DO				(hacer)
WHILE			(mientras)
FOR				(para)
VERDADERO			(verdadero)
FALSO				(falso)
BREAKER				(;)
BINDER				(,)
OPERATOR			(:|%|\*|\-|\+|\/)
APPEND				(\.)
ADD				(\+\+)
SUBSTRACT			(\-\-)
COMPARATOR			((==)|(!=)|>|<|(>=)|(<=))
ASSIGNATION			(=)
LINKER				(&|\||&&|\|\|)
OPENCLAUSE			(\{)
CLOSECLAUSE			(\})
OPENCONTROLLER			(\()
CLOSECONTROLLER			(\))
STRING				(\"[^\"]*\")
CHAR				(\'[^\']\')
STARTER				(InicioPrograma)
BYTE				(byte)
SHORT				(enteroCorto)
INT				(entero)
LONG				(enteroLargo)
FLOAT				(real)
DOUBLE				(realLargo)
BOOLEAN				(logico)
CHARVAR				(caracter)
STRINGVAR			(cadena)
FLOATNUMBER				([0-9]+\.[0-9]+)
NUMBER				([0-9]+)
ID				([$]?[a-zA-Z_]+[0-9]*)
SPACE				(((\t)*(\ )+(\t)*)|((\ )*(\t)+(\ )*))
NEXTLINE			(\n)
/* Sección REGLAS */
%%
{PACKAGE}		{agregar_token(PACKAGE, yytext); return PACKAGE; }
SI		{yyerror("Escribe el error aquí, nada más");}
{CLASS} 	        {agregar_token(CLASS, yytext); return CLASS; }
{FUNCTION}		{agregar_token(FUNCTION, yytext);  return FUNCTION; }	
{SUBFUNCTION}		{agregar_token(SUBFUNCTION, yytext); return SUBFUNCTION; }
{IF}                	{agregar_token(IF, yytext);  return IF; }
{ELSE}              	{agregar_token(ELSE, yytext); return ELSE;}
{DO}                	{agregar_token(DO, yytext); return DO;}
{WHILE}         	{agregar_token(WHILE, yytext); return WHILE; }
{FOR}         	{agregar_token(FOR, yytext); return FOR; }
{VERDADERO}             {agregar_token(VERDADERO, yytext); return VERDADERO; }
{FALSO}             	{agregar_token(FALSO, yytext); return FALSO; }
{BREAKER}           	{agregar_token(BREAKER, yytext); return BREAKER; }
{BINDER}            	{agregar_token(BINDER, yytext); return BINDER; }
{OPERATOR}          	{agregar_token(OPERATOR, yytext); return OPERATOR; }
{APPEND}            	{agregar_token(APPEND, yytext); return APPEND; }
{ADD}               	{agregar_token(ADD, yytext); return ADD; }
{SUBSTRACT}         	{agregar_token(SUBSTRACT, yytext); return SUBSTRACT; }
{COMPARATOR}        	{agregar_token(COMPARATOR, yytext); return COMPARATOR; }
{ASSIGNATION}        	{agregar_token(ASSIGNATION, yytext); return ASSIGNATION ;}
{LINKER}            	{agregar_token(LINKER, yytext); return LINKER; }
{OPENCLAUSE}		{agregar_token(OPENCLAUSE, yytext); return OPENCLAUSE; }
{CLOSECLAUSE}		{agregar_token(CLOSECLAUSE, yytext); return CLOSECLAUSE; }
{OPENCONTROLLER}	{agregar_token(OPENCONTROLLER, yytext); return OPENCONTROLLER; }
{CLOSECONTROLLER}	{agregar_token(CLOSECONTROLLER, yytext); return CLOSECONTROLLER; }
{STRING}		{agregar_token(STRING, yytext); return STRING;}	
{CHAR}			{agregar_token(CHAR, yytext); return CHAR; }    
{STARTER}	        {agregar_token(STARTER, yytext); return STARTER; }
{BYTE}			{agregar_token(BYTE, yytext); return BYTE; }
{SHORT}			{agregar_token(SHORT, yytext); return SHORT; }
{INT}			{agregar_token(INT, yytext); return INT; }
{LONG}			{agregar_token(LONG, yytext); return LONG;  }
{FLOAT}			{agregar_token(FLOAT, yytext); return FLOAT; }
{DOUBLE}            	{agregar_token(DOUBLE, yytext); return DOUBLE; }
{BOOLEAN}		{agregar_token(BOOLEAN, yytext); return BOOLEAN; }
{CHARVAR}           	{agregar_token(CHARVAR, yytext); return CHARVAR; }
{STRINGVAR}		{agregar_token(STRINGVAR, yytext); return STRINGVAR; }
{FLOATNUMBER}		{agregar_token(FLOATNUMBER, yytext); return FLOATNUMBER; }
{NUMBER}		{agregar_token(NUMBER, yytext); return NUMBER; }
{ID}			{agregar_token(ID, yytext); return ID; }
{SPACE}			{ }
{NEXTLINE} 		{ nextline();}





%%

/* Sección CODIGO USUARIO */


struct token {
    char *nombre_token;
    int tipo_token;
    struct token *sgte;
};

struct palabra *lista = NULL; /*primer elemento de la lista*/

int agregar_token(int tipo, char *token) {

	struct token *p;
	if(buscar_token(token, tipo) != 0){
		return 0;
	}

	/**/
	p = malloc( sizeof (struct token) );
	p -> nombre_token = malloc(strlen(token) +1);
	/**/
	strcpy( p-> nombre_token, token);
	p ->tipo_token = tipo; 
	/**/
	p->sgte = lista;
	lista = p;
	return 1;	

}

int buscar_token(char *token, int tipo) {

	struct token *p = lista;
	/**/
	while (p != NULL) {

		if(strcmp (p->nombre_token, token) == 0 &&  p -> tipo_token == tipo)
		return 1;
		p =  p -> sgte;
	}
	return 0;
}



