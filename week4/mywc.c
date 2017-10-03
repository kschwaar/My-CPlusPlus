//Linux wc lines???
//Counts lines, words, and bytes.

#include <stdio.h>
#define IN	1
#define OUT	0

int main (){
	int c;
	int nl = 0; //look for new line character
	int nw = 0; //when you're outside of a word, then you increase nw.
	int nc = 0;
	int state = OUT;
	
	while((c = getchar())!= EOF){
		++nc;
		if(c == '\n'){
			++nl;
		}
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}
	
	printf("nl = %d, nw = %d, nc = %d\n",nl,nw,nc);
}