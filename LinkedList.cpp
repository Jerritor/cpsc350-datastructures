#include <iostream>

using namespace std;

//Declaration
class ListNode
{
  public:
    ListNode();
    ListNode(int d);
    ~ListNode();
    int data;
    ListNode *next;
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
