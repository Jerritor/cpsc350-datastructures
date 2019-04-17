#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() //default constructor
{
	//initialize variables to default values

	//'new' allocates to heap. memory is deallocated in destructor
	myArray = new char[100];
	size = 100; //100 is my default constructor size
	top = -1;

}

Stack::Stack(int maxSize) //overloaded constructor
{
	myArray = new char[maxSize];
	size = maxSize;
	top = -1;
}

Stack::~Stack() //default constructor
{
	delete myArray; //deallocates myArray from heap memory
}

void Stack::push(char d)
{
	//check if stack is full or not empty
	if (size-1 != top && size > 0)
	{
		myArray[++top] = d; //top is pre-incremented to start at 0
	}
}

char Stack::pop()
{
	if (!isEmpty()) //check if empty
	{
		char temp = myArray[top--];
		return temp;
	}

	//OTHER VERSION
	if (!isEmpty())
		return myArray[top--];
}

char Stack::peek()
{
	return myArray[top];
}

bool Stack::isFull()
{
	return (top == size-1);
}

bool Stack::isEmpty()
{
	return (top == -1);
}

int Stack::getSize()
{
	return top+1; //+1 bc top initialized as -1
}
