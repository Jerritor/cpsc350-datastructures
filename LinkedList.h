#include <iostream>

using namespace std;

class ListNode //Node class
{
  public:
    ListNode();
    ListNode(int d);
    ~ListNode();
    int data; //data of this node
    ListNode *next; //pointer to next node
};

class NaiveList //Linked List class
{
  public:
    NaiveList();
    ~NaiveList();
    void insertFront(int data);
    void printList();

    const int peek() const;
    int removeFront();
    int find(int value); //aka search(). returns index
    int deletePosition(int position);

    bool isEmpty() const;
    unsigned int getSize() const;

  private:
    ListNode *front;
    unsigned int size;
};
