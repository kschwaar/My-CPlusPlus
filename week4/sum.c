//Sum program
//Kevin Schwaar

#include <stdio.h>   
#include <stdlib.h> 

int main (int argc, char *argv[]){
  int i;
  int sum;
  printf("You typed: \n");
	for(i = 0; argv[i] !=NULL; i++){
		printf("argv[%d] = %d\n",i,atoi(argv[i]));
		sum+=atoi(argv[i]);
	}
	printf("The sum of the numbers is: %d\n",sum);
}