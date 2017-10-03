//Shift operator is kinda fun, kinda cool?

#include <stdio.h>

int main (){
	unsigned long long n = 1;
	int i;
	
	for(i=1; i<=64; i++){
		n = n<<1;
		//<< is the shift.  So like 0000001 shift left to make 0000010.
		printf("2^%d -> %llu \n",i,n);
	}
}