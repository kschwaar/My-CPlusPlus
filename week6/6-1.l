%%
[ ]+ 	{fprintf(yyout," ");}		
^\n		;
\t		;



.		{fprintf(yyout,"%s",yytext);}	
%%

int main (int argc, char **argv){
	if(argc > 1){
		FILE *inFile;
		
		inFile = fopen(argv[1],"r");
		if(!inFile) {
			fprintf(stderr, "Could not open %s\n",argv[1]);
			exit(1);
		}
		yyin = inFile;
	}
	yyout = fopen("6-1.txt", "w");
	yylex();
	return 0;
}