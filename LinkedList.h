#pragma once
#include <iostream>

using namespace std;

#ifndef LISTNODE_S //_S stands for single
#ifndef LISTNODE_D
#define LISTNODE_S
class ListNode //Node class
{
  public:
    ListNode();
    ListNode(int d);
    ~ListNode();
    int data; //data of this node
    ListNode *next; //pointer to next node
};
#endif //LISTNODE
#endif //LISTNODE

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
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
#endif //LINKEDLIST_H
