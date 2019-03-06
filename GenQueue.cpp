#include <iostream>
#include "GenQueue.h"

using namespace std;
GenQueue::GenQueue() //default constructor
{
	mSize = 100;
	myQueue = new char[mSize];

}

GenQueue::GenQueue(int maxSize) //overloaded constructor
{
	mSize = maxSize;
	myQueue = new char[maxSize];
	head = 0;
	tail = -1;
	numElements = 0;
}

GenQueue::~GenQueue() //deconstructor
{
	delete myQueue;
}

void GenQueue::insert(char d)
{
	if (isFull())
	{
		//queue is full
	}
	else
		numElements++;

	if (tail == mSize-1) //makes queue circular
	{
		tail = 0;
		myQueue[tail] = d;
	}
	else
	{
		myQueue[++tail] = d;
	}
}

char GenQueue::remove()
{
	//TODO: check if empty

	char c = '\0';
	c = myQueue[head];

	//this makes queue circular
	if (head == mSize)
	{
		head = 0;
	}

	numElements--;
	head++; //since we cant delete value from array, head simulates queue[0]
			//at another index

	return c;
}

char GenQueue::front()
{
	return myQueue[head];
}

int GenQueue::size()
{
	return numElements;
}

bool GenQueue::isEmpty()
{
	return (numElements == 0);
}

bool GenQueue::isFull()
{
	return (numElements == mSize);
}
