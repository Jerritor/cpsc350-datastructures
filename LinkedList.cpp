#include <iostream>
#include "LinkedList.h"

using namespace std;

//===Node Implementation===

ListNode::ListNode()
{
  //data = 0
  //next = NULL;
}

ListNode::ListNode(int d)
{
  data = d;
  next = NULL;
}

ListNode::~ListNode() { } //nothing to deallocate?

//===LinkedList Implementation===

NaiveList::NaiveList() //blank linkedlist
{
  size = 0;
  front = NULL;
}

NaiveList::~NaiveList()
{
  while (!isEmpty())
  {
    removeFront();
  }
}

void NaiveList::insertFront(int data)
{
  ListNode *node = new ListNode(data); //create new node with data
  if (size == 0)
    front = node;
  else
  {
    node -> data = data; //setting node.data = data
    node -> next = front; //current node's next pointer (node.next) points to front node
    front = node;  //the new node is now the front node
  }
  size++; //increase size
}

void NaiveList::printList()
{
  ListNode *current = front;
  while (current) //this is a boolean check -- if not null
  {
    cout << current -> data << endl;
    current = current -> next;
  }
}

const int NaiveList::peek() const
{
  return front -> data;
}

int NaiveList::removeFront()
{
  int temp = front->data;	//temp = current/front node's data
  ListNode *old = front;	//save current node. (old->data should be saved?)

  front = front->next;		//change front pointer to next node

  //old->next = NULL;		//set old.next pointer to nothing
  delete old;			//delete old, it's been allocated
  size--;			//decrease linkedlist size

  return temp;			//return front.data
}

int NaiveList::find(int value)
{
  int index = -1; //front is index = 0
  ListNode *current = front; //current = front node

  while(current != NULL) //if current == NULL, index = -1
  {
    ++index; //increase index
    if(current-> data == value) //if current.data = value
    {
      break;
    }
    else
    {
      current = current->next;	//set current = next node
    }
  }
  return index;
}

int NaiveList::deletePosition(int position) //assuming the list exists, returns the deleted data
{
  int index = 0; //prev's index is -1, current is 1

  //checks to make sure there's at least one node
  ListNode *current = front; //current node = front node
  ListNode *previous = front; //previous node = front node

  while (index != position)
  {
    previous = current; //stay back?
    current = current->next; //current node = next node;
    ++index; //increment index
  }

  //when we find the correct position, update pointers

  previous->next = current->next;	//prev's next pointer point's at current's next pointer. skips current
  //if postion = 0, this means nothing

  current->next = NULL; //delete current.next pointer
  int temp = current->data; //save current data
  delete current; //delete current node
  size--; //decrease size by one

  return temp; //return the deleted node's data
}

bool NaiveList::isEmpty() const
{
  return front == NULL;
}

unsigned int NaiveList::getSize() const
{
  return size;
}
