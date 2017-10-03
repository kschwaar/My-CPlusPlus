//Mandelbrot set\
//The set of points that do not escape to infinity under the iteration z -> z^2 +c
//Example (2 is not in the set)

#include <cstdio>
#include <cmath>
#include <complex>
#include <iostream>
using namespace std;

int iterate_pt (complex<double> c);

#define ncols 800
#define nrows 800
int Mand[ncols][nrows];

int main (){
	double crcenter = -0.745;
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
	complex<double> c;
	complex<double> imag = (0.0,1.0); // this is just i
	double dx = (crmax-crmin)/ncols;
	double dy = (cimax-cimin)/nrows;
	
	for(y=0; y<nrows; y++){
		for(x=0; x<ncols; x++){
			c = ((crmin + x*dx),(cimin + y*dy));
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

int iterate_pt(complex<double> c){
	complex<double> z = (0.0,0.0);
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