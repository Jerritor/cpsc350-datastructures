#pragma once
#include <iostream>

using namespace std;

#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

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

    bool isEmpty() const;
    unsigned int getSize() const;
  private:
    ListNode *front;
    ListNode *back;
    unsigned int size;
};

#endif //DOUBLELINKEDLIST_H
