//Write a function that returns "true" if two functions are the exact same.

#include <stdio.h>

void compare (int m[], int n[]);

int main(){
	int array1[10]={1,2,3,4,5,6,7,8,9,10};
	int array2[5]={5,6,7,8,9};
	int array3[10]={1,2,3,4,5,6,7,8,9,10};
	
	int i;
	printf("Array1 contains ");
	for(i=0; i<sizeof(array1)/4; i++){
		printf("%d ",array1[i]);
	}
	printf("\n");
	
	printf("Array2 contains ");
	for(i=0; i<sizeof(array2)/4; i++){
		printf("%d ",array2[i]);
	}
	printf("\n");
	
	printf("Array3 contains ");
	for(i=0; i<sizeof(array3)/4; i++){
		printf("%d ",array3[i]);
	}
	printf("\n");
	
	printf("Does array1 equal array 2? ");
	compare(array1,array2);
	
	printf("Does array2 equal array 3? ");
	compare(array2,array3);
	
	printf("Does array1 equal array 3? ");
	compare(array1,array3);
}

void compare (int m[], int n[]){
	if(sizeof(m)!=sizeof(n)){
		printf("FALSE\n");
		return;
	}
	int i;
	for(i=0; i<sizeof(m)/4; i++){
		if(m[i]!=n[i]){
			printf("FALSE\n");
			return;
		}
	}
	printf("True\n");
}