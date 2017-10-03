//Structures

#include <stdio.h>
#include <string.h>

struct Student {
	int id;
	char *firstName;
	char *lastName;
};

int main() {
	struct Student s;
	s.id = 100;
	s.firstName = "John";
	s.lastName = "Doe";
	
	printf("The id for s = %d\n", s.id);
	printf("The name for s is %s %s\n",s.firstName,s.lastName);
}