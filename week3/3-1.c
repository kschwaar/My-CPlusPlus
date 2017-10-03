//Write a simple program that, given an integer n from the console, creates a pointer (whose name is iptr) to n, then carefully explains (via printf statements) the difference between iptr, the value of n, the value of what iptr is pointing to (*) and the address of n (&).  iptr is a perfectly good variable.  What is its address?
//By Kevin Schwaar

#include <stdio.h>

int main (){
	int n;
	int *iptr = &n;
	printf("Enter positive integer: ");
	scanf("%d", &n);
	printf("Your integer n is %d\n",n);
	printf("The address of n is %p\n",&n);
	printf("The iptr points to %p\n",iptr);
	printf("The value that iptr points to is %d\n",*iptr);
	printf("The address of iptr is %p\n",&iptr);
}