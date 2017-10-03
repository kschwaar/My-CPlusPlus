//Kevin Schwaar
//Final Project
//Use lists to build a program capable of doing polynomial arithmetic.

#include <iostream>
#include <cmath>
#include <list>
#include <stdio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

list<int> add(list<int> a, list<int> b);
void subtract(list<int> a, list<int> b);
list<double> DivSub(list<double> a, list<double> b);
void multiply(list<int> a, list<int> b);
void divide(list<int> a, list<int> b);
void print(list<int> a);
list<int> random();
list<int> assigning();


int main(){
list<int> first;
list<int> second;
list<int> outcome;
first.push_front(1);
first.push_front(4);
first.push_front(4);
second.push_front(1);
second.push_front(4);
second.push_front(4);
cout<<"Default values are: "<<endl;
print(first);
print(second);

int input;
while(input!=8){  
  cout<<"1. add\n";
  cout<<"2. subtract\n";
  cout<<"3. multiply\n";
  cout<<"4. divide\n";
  cout<<"5. random polynomials\n";
  cout<<"6. assign polynomials\n";
  cout<<"7. print\n";
  cout<<"8. quit\n";
  cout<<"Selection: ";
  cin>> input;
  switch ( input ) {
  case 1:   
	cout<<"Adding first and second"<<endl;
	outcome=add(first,second);
	print(outcome);
    break;
  case 2: 
	cout<<"subtracting first and second"<<endl;
	subtract(first,second);
    break;
  case 3:  
	cout<<"multiplying first and second"<<endl;
	multiply(first,second);
    break;
  case 4:           
    cout<<"Dividing first by the second"<<endl;
	divide(first,second);
    break;
  case 5:
	cout<<"Assigning random values to the first polynomial"<<endl;
	first.clear();
	first=random();
	cout<<"Assigning random values to the second polynomial"<<endl;
	second.clear();
	second=random();
	break;
  case 6:
	first.clear();
	second.clear();
	first=assigning();
	second=assigning();
	break;
  case 7:
	print(first);
	print(second);
	break;
  case 8:
	cout<<"quitting";
	return -1;
  default:            // Note the colon, not a semicolon
    cout<<"Error, bad input\n";
    break;
  }
  cout << endl<<endl;
  cin.get();
}
}



list<int> add(list<int> a, list<int> b){
	list<int> output;
	while(a.size()>b.size()){
		output.push_front(a.back());
		a.pop_back();
	}
	while(b.size()>a.size()){
		output.push_front(b.back());
		b.pop_back();
	}
	while(!a.empty()){
	output.push_front(a.back()+b.back());
	a.pop_back();
	b.pop_back();
	}
	return output;
}

void subtract(list<int> a, list<int> b){
	list<int> output;
	while(a.size()>b.size()){
		output.push_front(a.back());
		a.pop_back();
	}
	while(b.size()>a.size()){
		output.push_front(-b.back());
		b.pop_back();
	}
	while(!a.empty()){
	output.push_front(a.back()-b.back());
	a.pop_back();
	b.pop_back();
	}
	print(output);
}

list<double> DivSub(list<double> a, list<double> b){
	list<double> output;
	while(a.size()>b.size()){
		output.push_front(a.back());
		a.pop_back();
	}
	while(b.size()>a.size()){
		output.push_front(-b.back());
		b.pop_back();
	}
	while(!a.empty()){
	output.push_front(a.back()-b.back());
	a.pop_back();
	b.pop_back();
	}
	return output;
}

void multiply(list<int> a, list<int> b){
	list<int> temporary;
	list<int> output;
	while(!a.empty()){
		for(int i=1; i<a.size(); i++){
			temporary.push_back(0);
		}
		for(list<int>::iterator it=b.begin(); it!=b.end(); it++){
			temporary.push_back(a.back()*(*it));
		}
		a.pop_back();
		output=add(output,temporary);
		temporary.clear();
	}
	print(output);
}


// (list a)/(list b)
void divide(list<int> a, list<int> b){
	list<double> dividend;
	for(list<int>::iterator it=a.begin(); it!=a.end(); it++){
		dividend.push_back(*it);
	}
	list<double> answer;
	list<double> temporary;
	while(dividend.size()>=b.size()){
	temporary.clear();
	int x = dividend.size()-b.size();
	while(x>0){
		temporary.push_back(0);
		x--;
	}
	double multiplier = dividend.back()/b.back();
	answer.push_front(multiplier);
	for(list<int>::iterator it=b.begin(); it!=b.end(); it++){
		temporary.push_back(*it*multiplier);
	}
	if(dividend.size()==a.size() && dividend.back()==0){
		return;
	}
	dividend=DivSub(dividend,temporary);
	dividend.resize(dividend.size()-1);
}
while(!answer.empty()){
	cout << answer.back(); answer.pop_back();
	cout << "x^"<<answer.size() << " ";
	}
	cout<<endl;
for(list<double>::iterator it=dividend.begin(); it!=dividend.end(); it++){
	if((*it)!=0){
		cout << "\tRemainder is: "; 
		while(!dividend.empty()){
			cout << dividend.back(); dividend.pop_back();
			cout << "x^"<<dividend.size() << " ";
		}
	cout<<endl;
		break;
	}
}
}

void print(list<int> a){
	while(!a.empty()){
	cout << a.back(); a.pop_back();
	cout << "x^"<<a.size() << " ";
	}
	cout<<endl;
}

list<int> random(){
	list<int> output;
	cout<<"How many coefficients do you want?"<<endl;
	int max;
	cin >> max;
	unsigned seed;
	seed=time(NULL);
	srand(seed);
	for(int i=0; i<max; i++){
		output.push_front(rand()%100-49);
	}
	print(output);
	return output;
}

list<int> assigning(){
	int max;
	list<int> input;
	cout<<"Enter the number of coefficients you'll be entering"<<endl;
	cout<<"It is the largest exponent +1"<<endl;
	cin >> max;
	cout<<"Enter the coefficient values you desire"<<endl;
	cout<<"Start with the largest exponent and end with the smallest"<<endl;
	cout<<"Type 0's for coefficients if needed"<<endl;
	cout<<"For example: For 5x^3+0x^2-8x^1+15"<<endl;
	cout<<"type 5 (enter) 0 (enter) -8 (enter) 15 (enter)"<<endl;
	int typed;
	for(int i=0; i<max; i++){
		cin >> typed;
		input.push_front(typed);
	}
	print(input);
	return input;
}