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
}

//Implementation
ListNode::ListNode()
{
  //default constructor
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
