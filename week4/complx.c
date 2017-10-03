//Building complex data structures

#include <stdio.h>
#include <math.h>

typedef struct {
	double re;
	double im;
	
}Complex;

double modulus (Complex c);
Complex add (Complex c, Complex d);
Complex multiply (Complex c, Complex d);
Complex divide (Complex c, Complex d);

int main() {
	Complex z1;
	Complex z2;
	Complex z3;
	Complex *zptr;
	
	z1.re=1.0;
	z1.im=1.0;
	printf("The length of z1 is %f\n",modulus(z1));
	
	zptr = &z2;
	zptr->re =3.0;
	zptr->im =4.0;
	printf("The length of z2 is %f\n",modulus(z2));
	
	z3=add(z1,z2);
	printf("adding z1 and z2 yields %f + %f\n",z3.re,z3.im);
	
	z3=multiply(z1,z2);
	printf("multiplying z1 and z2 yields (%f + %f)\n",z3.re,z3.im);
	
	z3=divide(z1,z2);
	printf("dividng z1 by z2 yields (%f + %f)\n",z3.re,z3.im);
}


double modulus (Complex c){
	double x = c.re;
	double y = c.im;
	
	return sqrt(x*x + y*y);
}

Complex add (Complex c, Complex d){
	Complex z3;
	z3.re=(c.re+d.re);
	z3.im=(c.im+d.im);
	return z3;
}

Complex multiply (Complex c, Complex d){
	Complex z3;
	z3.re=(c.re*d.re+c.im*d.im);
	z3.im=(c.im*d.re+c.re*d.im);
	return z3;
}

Complex divide (Complex c, Complex d){
	Complex cong;
	cong.re=d.re;
	cong.im=-d.im;
	Complex num, denm;
	num=multiply(c,cong);
	denm=multiply(d,cong);
	num.re=num.re/denm.re;
	num.im=num.im/denm.re;
	return num;
}
