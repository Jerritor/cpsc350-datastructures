#include <iostream>

using namespace std;

class Stack
{
	public:
		Stack(); //constructor
		Stack(int maxSize); //overloaded constructor
		~Stack(); //destructor

		void push(char d); //add to top of stack
		char pop();  //remove and return top of stack
		char peek(); //also top() - returns top of stack

		int getSize();	//size of stack
		bool isEmpty();
		bool isFull();

		int size; //current size of stack
		int top; //top index of stack
	private:
		//dynamic memory allocation - size will be initialized at instantiation
		char *myArray;
};
