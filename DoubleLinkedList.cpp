#include <iostream>
#include "DoubleLinkedList.h"

using namespace std;

//===Node Implementation===
inline ListNode::ListNode()
{
  data = -1;
  next = NULL;
  prev = NULL;
}

inline ListNode::ListNode(int d)
{
  data = d;
  next = NULL;
  prev = NULL;
}

inline ListNode::~ListNode() { }

//===Double LinkedList Implementation===

DoublyLinkedList::DoublyLinkedList()
{
  size = 0;
  front = NULL;
  back = NULL;
}

DoublyLinkedList::~DoublyLinkedList()
{
  while (!isEmpty()) removeFront();
}

void DoublyLinkedList::insertFront(int data)
{
  ListNode *node = new ListNode(data); //create new node with data
  if (size == 0)
    back = node;
  else
  {
    front -> prev = node;
    node -> next = front; //current node's next node (node.next) points to front
  }
  front = node;  //the new node is now the front node
  size++; //increase size
}

void DoublyLinkedList::insertBack(int data)
{
  ListNode *node = new ListNode(data); //create new node with data
  if (size == 0)
  {
    front = node;
  }
  else
  {
    back -> next = node;
    node -> prev = back;
  }
  back = node;  //the new node is now the front node
  size++; //increase size
}

void DoublyLinkedList::printList()
{
  ListNode *current = front;
  while (current->next != NULL) //this is a boolean check
  {
	cout << (current->next != NULL) << " ";
    cout << current-> data << endl;
    current = current -> next;
  }
  cout << (current->next != NULL) << " ";
  cout << current-> data << endl;
}

const int DoublyLinkedList::peek() const
{
  return front -> data;
}

int DoublyLinkedList::removeFront()
{
  int temp = front->data;	//temp = current/front node's data
  ListNode *ft = front;		//save head

  front = front->next;		//change front to next node

  front-> prev = NULL;
  ft->prev = NULL;
  ft->next = NULL;		//set ft.next to not point to anything

  delete ft;			//delete ft, it's been allocated
  size--;			//decrease linkedlist size
  return temp;			//return front.data
}

int DoublyLinkedList::removeBack()
{
  int temp = back->data;
  ListNode *bk = back;

  back = back->prev;

  back->next = NULL;
  bk->next = NULL;
  bk->prev = NULL;

  delete bk;
  size--;
  return temp;
}

int DoublyLinkedList::find(int value)
{
  int index = -1;
  ListNode *current = front; //current = front node

  while(current != NULL)
  {
    ++index; //increase index
    if(current->data == value) //if current.data = value
      return index;
    else
      current = current->next;	//set current = next node
  }
  return -1;
}

int DoublyLinkedList::deletePosition(int position) //assuming the list exists, returns the deleted data
{
  //invalid conditions
  if (position >= getSize() || position < 0 || isEmpty())
    return -1;

  if (position == 0)
    return removeFront();
  else if (position == getSize()-1)
    return removeBack();

  int index = 0;
  //checks to make sure there's at least one node
  ListNode *previous = front; //previous node = front node
  ListNode *current = front; //current node = front node

  //loops position-1 times. prev = remove.prev, curr = node to be removed
  for(int i = 0; i < position; i++)
  {
    previous = current; //stay back?
    current = current->next; //current node = next node;
  }

  //when we find the correct position, update pointers
  previous->next = current->next; //sets previous node's.next address to current.next
  current->next->prev = previous; //sets next.prev's node to previous

  current->next = NULL; //delete current.next pointer
  current->prev = NULL; //delete current.prev pointer
  int temp = current->data; //save current data

  delete current; //delete current
  size--; //decrease size by one
  return temp; //return the deleted node's data
}

bool DoublyLinkedList::isEmpty() const
{
  return front == NULL;
}

unsigned int DoublyLinkedList::getSize() const
{
  return size;
}
