%{
	int lineno = 0;
%}
line ^(.*)\n
%%
{line}		{fprintf(yyout, "%4d\t%s",++lineno,yytext);}

%%

int main (int argc, char*argv[]){
	yyin = fopen(argv[1], "r");	//r means open for reading
	yyout = fopen("output.txt", "w"); //w means output for writing
	yylex(); //always needed.
}
