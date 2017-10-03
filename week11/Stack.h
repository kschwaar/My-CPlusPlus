//stack.h
//stack class
//array based implementation.

#include <iostream>
using namespace std;

// If a macro named "STACK" hasn't been seen before, 
//the compiler will complile and use the following code until it finds endif.
#ifndef STACK
//The only purpose of this empty define is to tell the compiler that it's seen this before.
#define STACK

const int STACK_CAPACITY = 128;  //An array bound must be an integer constant
typedef int StackElement;

class Stack {
	public:
		Stack();
		//using the term constant after a declaration means you can't modify data memebers.
		//you can still access them.
		bool empty() const;
		void push (const StackElement value);
		StackElement peek() const;
		void pop();
	private:
		StackElement myArray[STACK_CAPACITY];
		int myTop;		
};

Stack::Stack(){
	myTop=-1;
}

bool Stack::empty() const {
	return (myTop == -1);
}

void Stack::push(const StackElement value){
	if (myTop < STACK_CAPACITY -1){
		++myTop;
		myArray[myTop] = value;
	}
	else{
		cerr << "Stack is full" << endl;
	}
}

StackElement Stack::peek() const {
	if(myTop >= 0){
		return myArray[myTop];
	}
	else{
		cerr << "Stack is empty.  The following is UGH!" << endl;
	}
	return -99999;
}

void Stack::pop(){
	if(myTop >=0){
		myTop--;
	}
	else{
		cerr << "Stack is empty." << endl;
	}
}

#endif