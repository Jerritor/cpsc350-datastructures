#include <iostream>

using namespace std;

class GenQueue
{
	public:
		GenQueue();	//constructor
		GenQueue(int maxSize);	//overloaded constructor
		~GenQueue();	//deconstructor

		void insert(char d);	//aka enqueue()
		char remove();	//aka dequeue()
		char front();	//peek
		int size();
		bool isEmpty();
		bool isFull();
	private:
		int head;
		int tail;
		int numElements;
		int mSize;

		char *myQueue; //dynamic memory initialization - init in constructors
};
