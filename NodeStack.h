#include <iostream>

using namespace std;

class StackNode //Node class
{
  public:
    StackNode();
    StackNode(char d);
    ~StackNode();
    char data; //data of this node
    StackNode *next; //pointer to next node
};

//Linked List-based Stack
class NodeStack
{
	public:
		NodeStack();
		NodeStack(char first); //first = first stack element
		~NodeStack();

		void push(char d);
		char pop();
		char peek();

		int getSize();
		bool isEmpty();
	private:
		StackNode *top;
		int size; //stack size, not max size
};
