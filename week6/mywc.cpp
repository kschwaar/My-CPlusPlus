//Linux wc lines???
//Counts lines, words, and bytes.

#include <cstdio>
#include <iostream>
#define IN	1
#define OUT	0
using namespace std;

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
	
	cout << "nl = " << nl << ", nw = " << nw << ", nc = " << nc << endl;
}