//Parameters.  
//Like Java
// public static void main (String[]args){
	
//}
//The name of the command (and even the path to the command) is the first place in the args array.


#include <stdio.h>

//pointer to a character array is a string array.
int main (int argc, char *argv[]){
	int i;
	for(i = 0; argv[i] !=NULL; i++){
		printf("argv[%d] = %s\n",i,argv[i]);
	}
}