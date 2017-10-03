//Using system commands

#include <stdio.h>

int main (){
	printf("This is your present working directory:\n");
	system("cd");
	
	printf("This is your path:\n");
	system("PATH");
	
	printf("This is the date:\n");
	system("date /T");
	
	printf("This is a directory listing:\n");
	system("dir");
	
	printf("This is a pause:\n");
	system("timeout 5");
	
	printf("This changes the color:\n");
	system("color 0B");
	
	printf("This is the ipconfig of the computer:\n");
	system("ipconfig");
	
	printf("This starts notepad\n");
	system("start notepad");
	
	printf("These are the file attributes\n");
	system("attrib");
	
	printf("This changes the title of the dos-window\n");
	system("title dosRuinedYourLife");
	
	printf("These are the dos commands used:\n");
	system("doskey /history");
}