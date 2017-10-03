//file io

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float x;
	float y;
	float z;
}point;

point data;

int main (){
	int i;
	FILE *fin; //FILE structure pre-built.
	
	fin = fopen("geometry.txt","r");
	
	while(!feof(fin)){
		fscanf(fin, "%f %f %f\n",&data.x, &data.y, &data.z);
		
		printf("%f %f %f\n",data.x,data.y,data.z);
	}
	
	fclose(fin);
}