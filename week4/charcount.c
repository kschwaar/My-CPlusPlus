//Linux wc lines???

#include <stdio.h>

int main (){
	int nc = 0;
	
	while(getchar()!= EOF){
		++nc;
	}
	
	printf("nc = %d\n", nc);
}