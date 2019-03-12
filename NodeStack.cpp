#include <iostream>
#include "NodeStack.h"

using namespace std;

//===StackNode Implementation===
StackNode::StackNode()
{
	data = '\0';
	next = NULL;
}

StackNode::StackNode(char d)
{
	data = d;
	next = NULL;
}

StackNode::~StackNode() { } //nothing to deallocate?

//===NodeStack Implementation===
NodeStack::NodeStack()
{
	size = 0;
}

NodeStack::NodeStack(char first)
{
	size = 1;
	StackNode *firstnode = new StackNode(first);
	top = firstnode;
}

NodeStack::~NodeStack()
{
	while (!isEmpty()) pop();
}

void NodeStack::push(char d)
{
	StackNode *node = new StackNode(d);
	if (size != 0)
		node->next = top;
	top = node;
	size++;
}

char NodeStack::pop()
{
	char data = top->data;
	StackNode *rm = top;
	top = top->next;

	rm->next = NULL;
	delete rm;
	size--;
	return data;
}

char NodeStack::peek()
{
	return top->data;
}

int NodeStack::getSize()
{
	return size;
}

bool NodeStack::isEmpty()
{
	return (size == 0);
}
