//file io

#include <stdio.h>

int main (){
	FILE *fpt; //FILE structure pre-built.
	fpt = fopen("awmt.txt","r");
	char text[50000];
	fread(text,1,50000,fpt);
	printf("%s\n",text);
}