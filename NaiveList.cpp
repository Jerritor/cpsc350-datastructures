#include <iostream>

using namespace std;

//Declaration
class NaiveList
{
  public:
    NaiveList();
    ~NaiveList();
    void insertFront(int data);
    void printList();

    int removeFront();
    int find(int value); //aka search()
    int deletePosition(int position);

    bool isEmpty();
    unsigned int getSize();


  private:
    ListNode *front;
    unsigned int size;
}

Naive::NaiveList() //blank linkedlist
{
  size = 0;
  front = NULL;
}

NaiveList::~NaiveList()
{
  //Build some character; learn how to do this.
}

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
  node -> next = front; //current node's next node (node.next) points to front
  front = node;  //the new node is now the front node
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

int NaiveList::deletePosition(int position)
{
  int index = 0;
  //add a check to make sure position is valid.
  ListNode *current = front;
  ListNode *previous = front;
  while (index != position)
  {
    previous = current; //stay back?
    current = current->next;
    ++index;
  }

  //when we find the correct position, update pointers
  prev->next = current->next;
  current->next = NULL;
  int temp = current->data;
  delete current;
  size--;

  return temp;
}
