//Code the following operators.  +, -, *, /, %, <, >, <=, >=, ==, !=, &&, || and !.
//Written by Kevin Schwaar

#include <stdio.h>

int main(void){
	int a=5;
	int b=3;
	printf("int a = %d, int b = %d",a,b);
	printf("\na+b= %d",a+b);
	printf("\na-b= %d",a-b);
	printf("\na*b= %d",a*b);
	printf("\na/b= %d",a/b);
	printf("\na%%b= %d",a%b);
	printf("\na<b= %d",a<b);
	printf("\na>b= %d",a>b);
	printf("\na<=b = %d",a<=b);
	printf("\na>=a = %d",a>=a);
	printf("\na==b = %d",a==b);
	printf("\na!=b = %d",a!=b);
	printf("\na>b && a<=a = %d",a>b && a<=a);
	printf("\na<b || a==b = %d",a<b || a==b);
	printf("\n!%(a>=b%) = %d",!(a>=b));
}