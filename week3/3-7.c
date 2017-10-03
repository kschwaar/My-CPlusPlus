//Testing String Library functions
//Kevin Schwaar

#include <stdio.h>
#include <string.h>

int main (){
	char s[50], x[50];
	strcpy(s, "Are we human, ");
	strcpy(x, "or are we dancer?");
	
	printf("String s = %s\n",s);
	printf("String x = %s\n",x);
	strcat(s,x);
	printf("strcat(s,x) = %s\n",s);
	printf("\n");
	
	printf("String s = %s\n",s);
	printf("String x = %s\n",x);
	printf("strcmp(s,x) = %d\n",strcmp(s,x));
	printf("\n");
	
	printf("String s = %s\n",s);
	printf("strlen(s) = %d\n",strlen(s));
	printf("\n");
	
	
	printf("strtok(s,' ,e') = ");
	char *strptr = strtok(s," ,e");
	while(x!=NULL){
		printf("%s\n",strptr);
		strptr = strtok(NULL, " ,e");
	}
	
}