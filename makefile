all: 
	flex lexer.l
	bison -d parser.y
	gcc -c lex.yy.c parser.tab.c
	gcc -o lexpar lex.yy.c parser.tab.c -L"C:\GnuWin32\lib" -lfl
 
