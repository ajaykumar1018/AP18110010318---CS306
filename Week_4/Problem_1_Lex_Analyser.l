%{ 
#include <stdio.h>
%}
	
%% 

int|main|void|if|else|for|while|char|return|bool { fprintf(yyout, "keyword -  %s\n", yytext); } 
[a-z]([a-z]|[0-9])* { fprintf(yyout, "identifier - %s\n", yytext); } 
[0-9]* { fprintf(yyout, "integer - %s\n", yytext); } 
"<"|">"|"=="|"<="|">="|"!=" { fprintf(yyout, "relop - %s\n", yytext); } 
"{"|"}"|"("|")" { fprintf(yyout, "paranthesis - %s\n", yytext); } 
"/*"[^*/]*"*/" {} 
"\t"|"\n"|" "|; {}

%% 

int yywrap(){} 

int main() 
{ 

	extern FILE *yyin, *yyout; 

	yyin = fopen("in.txt", "r"); 

	yyout = fopen("out.txt", "w"); 

	yylex(); 
	return 0; 
}
