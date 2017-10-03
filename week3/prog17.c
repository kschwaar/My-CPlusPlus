//Array names are actually pointers.
//by Kevin Schwaar

#include <stdio.h>

int main(void){
	char c[5] = "now";
	
	printf("%p \n",&c);
	//&c = &c[0]
	printf("%p \n",&c[0]);
	printf("%p \n",c);
	//The name of an array is a pointer!
	//pointers allow us to access and manipulate cells.
	printf("%c \n",c[0]);
	printf("%c \n",c[2]);
	c[2] = 'a';
	printf("%c \n",c[2]);
}