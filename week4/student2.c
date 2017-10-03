//Student Structures
//Kevin Schwaar

#include <stdio.h>
#include <string.h>

struct Student {
	int id;
	char *firstName;
	char *lastName;
	char *major;
	char *email;
};

int main() {
	struct Student s;
	struct Student *sptr;
	
	sptr = &s;
	
	s.id=12345;
	s.firstName="Kevin";
	s.lastName="Schwaar";
	s.major="Computer Science";
	s.email="k.schwaar25@gmail.com";
	
	printf("The id for s = %d\n", sptr->id); // -> is pointer notation.
	printf("The name for s is %s %s\n",sptr->firstName,sptr->lastName);
	printf("The student's major is %s\n",sptr->major);
	printf("The student's email is %s\n",sptr->email);
}