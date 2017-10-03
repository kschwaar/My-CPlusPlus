%%
[\n\t]	;
-		;
-?(([0-9]+)|([0-9]*\.[0-9]+)|([eE][-+]?[0-9]+)|(([0-9]{1,3},)+[0-9]{3})?) { printf("number found %s \n",yytext);}
.		;
%%
main(){
	yylex(); //the parser in lex.  
}