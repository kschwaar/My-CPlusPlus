%{
#include <string.h>
int charCount =0;
int wordCount =0;
int lineCount =0;
%}
word	[^ \n\t]+
eol		\n
%%
{word}	{ wordCount++; charCount += yyleng;}
{eol}	{charCount++; lineCount++; }
.		{charCount++;}

%%

int main (int argc, char **argv){
	if(argc > 1){
		if(strlen(argv[1])>218){
			fprintf(stderr, "Filepath is too long.  Try again.");
		}
		FILE *inFile;
		
		inFile = fopen(argv[1],"r");
		if(!inFile) {
			fprintf(stderr, "Could not open %s\n",argv[1]);
			exit(1);
		}
		yyin = inFile;
	}
	yyout = fopen("output.txt", "w");
	yylex();
	printf("%d characters in the file\n%d words in the file\n%d lines in the file\n",charCount,wordCount,lineCount);
	fprintf(yyout,"%d characters in the file\n%d words in the file\n%d lines in the file\n",charCount,wordCount,lineCount);
	return 0;
}