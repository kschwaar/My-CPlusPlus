//2 dice simulation

#include <stdio.h>
#include <time.h>

void RollMe(int rolls);

int main (){
	int n, i;
	printf("How many times do you want to roll the dice?\n");
	scanf("%d",&n);
	
	RollMe(n);
}

void RollMe(int rolls){
	int i;
	unsigned seed;
	seed = time(NULL);
	srand(seed);
	
	for(i=1; i<=rolls; i++){
		int roll=(1+(rand()%6)+(1+(rand()%6)));
		printf("Roll %d was %d\n",i,roll);
	}
}