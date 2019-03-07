#include <iostream>

using namespace std;

//Declaration
class ListNode
{
  public:
    ListNode();
    ListNode(int d);
    ~ListNode();

    int data; //data of this node
    ListNode *next; //pointer to next node
    ListNode *prev; //pointer to previous node
}

class DoublyLinkedList
{
  public:
    NaiveList();
    ~NaiveList();
    void insertFront(int data);
    void printList();
    void insertBack(int d);

    int removeFront();
    int find(int value); //aka search()
    int deletePosition(int position);

    bool isEmpty();
    unsigned int getSize();
  private:
    ListNode *front;
    unsigned int size;
}

//Implementation
ListNode::ListNode()
{
  next = NULL;
  front = NULL;
  back = NULL;
}

ListNode::ListNode(int d)
{
  data = d;
  next = NULL;
}

ListNode::~ListNode()
{
  //Figure this one out on your own?
}

//////////
unsigned int NaiveList::getSize()
{
  return size;
}

void NaiveList::printList()
{
  while (current //this is a boolean check)
  {
    cout << current-> data << endl;
    current = current -> next;
  }
}

void NaiveList::insertFront(int data)
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

void NaiveList::insertBack(int data)
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

int NaiveList::removeFront()
{
  int temp = front->data;	//temp = current/front node's data
  ListNode *ft = front;		//save current node
  front = front->next;		//change front to next node
  ft->next = NULL;		//set front.set to not point to anything
  delete ft;			//delete ft, it's been allocated
  size--;			//decrease linkedlist size
  return temp;			//return front.data
}

int NaiveList::find(int value)
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

int NaiveList::deletePosition(int position) //assuming the list exists, returns the deleted data
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
NaiveList::insertBack(int d)
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
