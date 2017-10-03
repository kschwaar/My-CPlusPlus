//Parameters.  
//Like Java
// public static void main (String[]args){
	
//}
//The name of the command (and even the path to the command) is the first place in the args array.


#include <stdio.h>
#include <stdlib.h>

//pointer to a character array is a string array.
int main (int argc, char *argv[]){
	double num;
	printf("%d \n%s, \n%s, \n",argc, argv[0], argv[1]);
	
	num = atof(argv[1]);
	printf("The square of %6.3f is %8.3f\n",num, num*num);
}