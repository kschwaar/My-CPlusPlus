//Dynamic memory allocation.
//malloc: set the ammount of memory you want to use.
//This command returns a void pointer.
//I'm supposed to cast it to the right type.

//The beginning of a string array is a char*.  A char* is the beginning of a string.

//by Kevin Schwaar

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strcopy(char *dp, char*sp); //dp=destination pointer.  sp=source pointer

int main(void){
	char *src = "Now is the time";
	char *dest;
	
	printf("Source = %s\n",src);
	dest = (char *)malloc(sizeof(char)*(strlen(src)+1)); //strlen only gives us length of everything but the null.
	strcopy(dest,src);
	printf("Destination = %s",dest);
	
	//This is the memory management command.
	free(dest);
}	

char *strcopy(char *dp, char*sp){
	while(*sp!='\0'){
		*dp++ = *sp++;
	}
	*dp = '\0';
	return dp;
}