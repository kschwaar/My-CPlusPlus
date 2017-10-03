// Enums

#include <stdio.h>
#include <stdlib.h>

enum Weekday {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};


int main(void){
	enum Weekday today;
	today = THURSDAY;
	printf("%d \n",today);
	
	if(today<FRIDAY){
	printf("It's a workday\n");
	}
}