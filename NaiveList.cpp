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

Naive::NaiveList()
{
  //Create a new blank list
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
  ListNode *node = new ListNode(data);
  node->next = front;
  front = node;
  size++;
}

int NaiveList::removeFront()
{
  int temp = front->data;
  ListNode *ft = front;
  front = front->next;
  ft->next = NULL;
  delete ft;
  size--;
  return temp;
}

int NaiveList::find(int value)
{
  int index = -1;
  ListNode *current = front;

  while(current != NULL)
  {
    ++index;
    if(current-> data == value)
    {
      break;
    }
    else
    {
      current = current->next;
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
