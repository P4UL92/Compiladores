/* Programa que reconoce un programa de java en espanhol */

/* Sección DEFINICIONES */
%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/** Agrega el código al archivo **/
void AppendJar(char* yytext);

%}

/* Sección REGLAS */ 
%%
paquete                                                                 {AppendJar("package");}
clase 	                                                                {AppendJar("class");}
Salida			                                                        {AppendJar("System.out");}
imprimir			                                                    {AppendJar("print");}
imprimirLn			                                                    {AppendJar("println");}
formato			                                                        {AppendJar("format");}
si                                                                      {AppendJar("if");}
casoContrario                                                         {AppendJar("else");}
hacer                                                                   {AppendJar("do");}
mientras                                                                {AppendJar("while");}
para                                                                    {AppendJar("for");}
igual                                                                   {AppendJar("equals");}
aTexto                                                                  {AppendJar("toString");}
verdadero                                                               {AppendJar("true");}
falso                                                                   {AppendJar("false");}
;                                                                       {AppendJar(yytext);}
,                                                                       {AppendJar(yytext);}
:                                                                       {AppendJar(yytext);}
\.                                                                      {AppendJar(yytext);}
\+\+                                                                    {AppendJar(yytext);}
\-\-                                                                    {AppendJar(yytext);}
(%|\*|\-|\+|\/)                                                         {AppendJar(yytext);}
((==)|(!=)|>|<|(>=)|(<=))                                               {AppendJar(yytext);}
=                                                                       {AppendJar(yytext);}
(&|\||&&|\|\|)                                                          {AppendJar(yytext);}
\{								                                        {AppendJar(yytext);}
\(			                                                            {AppendJar(yytext);}
\"[^\"]*\"			                                                    {AppendJar(yytext);}
\'[^\']\'			                                                    {AppendJar(yytext);}
\)			                                                            {AppendJar(yytext);}
\}			                                                            {AppendJar(yytext);}
InicioPrograma	                                                        {AppendJar("public static void main(String[] args)");}
byte                                                                    {AppendJar(yytext);}
enteroCorto                                                             {AppendJar("short");}
entero                                                                  {AppendJar("int");}
enteroLargo                                                             {AppendJar("float");}
real                                                                    {AppendJar("float");}
realLargo                                                               {AppendJar("double");}
logico                                                                  {AppendJar("boolean");}
caracter                                                                {AppendJar("Char");}
cadena                                                                  {AppendJar("String");}
(((\t)*(\ )+(\t)*)|((\ )*(\t)+(\ )*))                                   {AppendJar(yytext);}
[0-9]+\.[0-9]+                                                                  {AppendJar(yytext);}
[0-9]+                                                                  {AppendJar(yytext);}
[$]?[a-zA-Z_]+[0-9]*                                                    {AppendJar(yytext);}
\n 												                        {AppendJar(yytext);}

%%

/* Sección CODIGO USUARIO */

char homedir[100];
char program[65535] = "";

/** Agrega el código al archivo **/
void AppendJar(char* yytext){
	strcat( program, yytext );
}

/** Crea el ejecutable *.java **/
void CreateJAR(){
    FILE* fPointer;
    snprintf(homedir, 100, "%s", getenv("HOME"));
    strcat(homedir, "/proyecto.java");
    fPointer = fopen(homedir,"w");
    int results = fputs(program,fPointer);
    fclose(fPointer);
}

/** Ejecuta el programa **/
void RunProgram(){
    printf("%s\n", program);
    printf("EJECUTANDO PROGRAMA...\n");
    CreateJAR();
    char run[100];
    strcpy(run, "java ");
    strcat(run, homedir);
    system(run);
}
int yywrap() {}

int main(int argc, char **argv)
{
	yylex();
    RunProgram();
	return 0;
}
