//ppm format.  text file starts wtih P3.  Then height/width.
// images and image creation
//Kevin Schwaar


#include <stdio.h>
#include <math.h>

int main (){
	int height = 200;
	int width = 200;
	int col = 0;
	int i,j;
	
	printf("P3\n%d %d\n255\n",height, width);
	
	for(i=1; i<=width; i++){
		for(j=1; j<=height; j++){
			int b = (i+j+55)/2;
			printf("%d\n%d\n%d\n", i+55, j+55, b);
		}
	}
}