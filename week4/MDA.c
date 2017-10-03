//ppm format.  text file starts wtih P3.  Then height/width.
// images and image creation
//Kevin Schwaar


#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int center(int a, int b, int c, int d);
int left(int a, int c, int e);
int top(int a, int b, int e);
int right(int b, int d, int e);
int bottom(int c, int d, int e);

int edge(int corner1, int corner2, int center);

int main (){
	int height = 513;
	int width = 513;
	int field[width][height];
	
	printf("P3\n%d %d\n255\n",height, width);
	
	field[0][0] = field[512][0] = field[0][512] = field[512][512] = 0; //don't touch
	
}



int center(int a, int b, int c, int d){
	srand(time(NULL));
	int d = pow(2,-1.2);
	int r = rand(d);
	
	int center;
	center = (a+b+c+d)/4 + r;	
}

int edge(int corner1, int corner2, int center){
	srand(time(NULL));
	int d = pow(2,-1.2);
	int r = rand(d);
	int edge = (corner1+corner2+center*2)/4 +r;
	return edge;
}