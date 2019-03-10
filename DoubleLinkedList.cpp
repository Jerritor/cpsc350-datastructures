#include <iostream>

using namespace std;

//===Node Implementation===
ListNode::ListNode()
{
  next = NULL;
  prev = NULL;
  data = -1;
}

ListNode::ListNode(int d)
{
  data = d;
  next = NULL;
  prev = NULL;
}

ListNode::~ListNode() { } //nothing to deallocate?

//===LinkedList Implementation===

void DoublyLinkedList::printList()
{
  while (current //this is a boolean check)
  {
    cout << current-> data << endl;
    current = current -> next;
  }
}

void DoublyLinkedList::insertFront(int data)
{
  ListNode *node = new ListNode(data); //create new node with data
  if (size == 0)
    back = front;
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
          front = node;
        else
        {
	  back -> next = node;
	  node -> prev = back;
        }
        back = node;  //the new node is now the front node
        size++; //increase size
}

int DoublyLinkedList::removeFront()
{
  int temp = front->data;	//temp = current/front node's data
  ListNode *ft = front;		//save current node
  front = front->next;		//change front to next node
  ft->next = NULL;		//set front.set to not point to anything
  delete ft;			//delete ft, it's been allocated
  size--;			//decrease linkedlist size
  return temp;			//return front.data
}

int DoublyLinkedList::find(int value)
{
  int index = -1;
  ListNode *current = front; //current = front node

  while(current != NULL)
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

  if(current == NULL)
  {
    index = -1;
  }

  return index;
}

int DoublyLinkedList::deletePosition(int position) //assuming the list exists, returns the deleted data
{
  int index = 0;
  //add a check to make sure position is valid.
  ListNode *current = front; //current node = front node
  ListNode *previous = front; //previous node = front node
  //current,previous = front

  while (index != position)
  {
    previous = current; //stay back?
    current = current->next; //current node = next node;
    ++index; //increment index
  }

  //when we find the correct position, update pointers
  prev->next = current->next; //previous node.next = current.next
  current->next = NULL; //delete current.next pointer
  int temp = current->data; //save current data
  delete current; //delete current
  size--; //decrease size by one

  return temp; //return the deleted node's data
}

//assuming a node of integers
DoublyLinkedList::insertBack(int d)
{
	++size;
	ListNode *node = new ListNode(d); //allocate a new node

	if (front == NULL) //if head is null
	{
		front = back;
	}
	else
	{
		back -> next = node;
		back = node;
	}
}

unsigned int DoublyLinkedList::getSize() const
{
  return size;
}
