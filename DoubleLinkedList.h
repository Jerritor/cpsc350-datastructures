#pragma once
#include <iostream>

using namespace std;

//#ifndef LISTNODE_D //_D stands for double
//#ifndef LISTNODE_S
//#define LISTNODE_D
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
};
//#endif //LISTNODE
//#endif //LISTNODE

//#ifndef DOUBLELINKEDLIST_H
//#define DOUBLELINKEDLIST_H
class DoublyLinkedList
{
  public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void insertFront(int data);
    void insertBack(int data);
    void printList();

    const int peek() const;
    int removeFront();
    int removeBack();
    int find(int value); //aka search() - returns index
    int deletePosition(int position);
    ListNode* remove(int key); //key = value to find

    bool isEmpty() const;
    unsigned int getSize() const;
  private:
    ListNode *front;
    ListNode *back;
    unsigned int size;
};
//#endif //DOUBLELINKEDLIST_H
