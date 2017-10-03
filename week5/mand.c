//Mandelbrot set\
//The set of points that do not escape to infinity under the iteration z -> z^2 +c
//Example (2 is not in the set)

#include <stdio.h>
#include <math.h>
#include <complex.h>

int iterate_pt (double complex c);

#define ncols 4000
#define nrows 4000
int Mand[ncols][nrows];

int main (){
	double crcenter = -0.665;
	double cicenter = -0.1325;
	
	int scale =0;
	
	//to scale it, add
	
	double crmin = crcenter - 0.05*pow(4,scale);
	double crmax = crcenter + 0.05*pow(4,scale);
	double cimin = cicenter - 0.05*pow(4,scale);
	double cimax = crcenter + 0.05*pow(4,scale);

	/*double crmin = -0.75;
	double crmax = -0.74;
	double cimin = -0.138;
	double cimax = -0.127;*/
	
	//for zooming in and out, find the center.  Then change the crmin/max (same for ci) by scales of 4.
	
	
	/*
	int ncols = 400;
	int nrows = 400;
	int Mand[ncols][nrows];
	*/
	
	int x,y;
	int col;
	double complex c;
	double complex imag = 0.0 + 1.0i; // this is just i
	double dx = (crmax-crmin)/ncols;
	double dy = (cimax-cimin)/nrows;
	
	for(y=0; y<nrows; y++){
		for(x=0; x<ncols; x++){
			c = (crmin + x*dx) + (cimin + y*dy)*imag;
			Mand[x][y] = iterate_pt(c) + 65;
		}
	}
	
	printf("P3\n%d %d\n255\n",ncols, nrows);
	
	for(y=0; y<nrows; y++){
		for(x=0; x<ncols; x++){
			col = Mand[x][y];
			printf("%d\n%d\n%d\n", col, col, col);//once the header of PPM is done, then rgb values are stored one line at a time.  
		}
	}
}

int iterate_pt(double complex c){
	double complex z = 0.0 +0.0i;
	int iterations = 0;
	int k;
	
	for(k=1; k<=(255-64); k++){
		z=z*z + c;
		if(sqrt(z*conj(z))>50){
			break;
		}
		else{
			++iterations;
		}
	}
	return iterations;
}