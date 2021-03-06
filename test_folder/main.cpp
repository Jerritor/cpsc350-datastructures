#include <iostream>
//#include "GenQueue.h"
//#include "GenStack.h"
//#include "LinkedList.h"
//#include "DoubleLinkedList.h"
//#include "NodeStack.h"
#include "HashMap.cpp"

using namespace std;

int main()
{
	/** Doubly LinkedList Testing
	DoublyLinkedList dll;

	dll.insertFront(3);
	dll.insertBack(4);
	dll.insertFront(2);
	dll.insertBack(5);
	dll.insertFront(1);

	cout << "Printing List" << endl;
	dll.printList();

	cout << "Index of 2: " << dll.find(2) << endl;
	cout << "Removing Front: " << dll.removeFront() << endl;
	cout << "Peeking: " << dll.peek() << endl;
	cout << "Removing Back: " << dll.removeBack() << endl;

	cout << "Deleting Index 1...: " << dll.deletePosition(1) << endl;
	cout << "Peeking: " << dll.peek() << endl;

	cout << "Printing Remaining" << endl;
	dll.printList();
	**/

	/** LinkedList Testing
	NaiveList ll;

	cout << "Inserting: 6,5,4,3,2,1" << endl;
	ll.insertFront(6);
	ll.insertFront(5);
	ll.insertFront(4);
	ll.insertFront(3);
	ll.insertFront(2);
	ll.insertFront(1);

	cout << "Printing Remaining" << endl;
	ll.printList();

	cout << "Index of 3: " << ll.find(3) << endl;
	cout << "Removing: " << ll.removeFront() << endl;
	cout << "Peeking: " << ll.peek() << endl;
	cout << "Removing: " << ll.removeFront() << endl;

	cout << "Printing Remaining" << endl;
	ll.printList();

	cout << "Deleting Index 2...: " << ll.deletePosition(2) << endl;

	cout << "Printing Remaining" << endl;
	ll.printList();

	cout << "Deleting Index 0...: " << ll.deletePosition(0) << endl;

	cout << "Peeking: " << ll.peek() << endl;

	cout << "Printing Remaining" << endl;
	ll.printList();
	**/

	/** Queue Testing
	GenQueue myQueue(10);

	myQueue.insert('J');
	myQueue.insert('E');
	myQueue.insert('R');
	myQueue.insert('R');
	myQueue.insert('I');
	myQueue.insert('C');
	myQueue.insert('K');

	cout << "removing: " << myQueue.remove() << endl;
	cout << "peeking: " << myQueue.front() << endl;

	while (!myQueue.isEmpty())
	{
		cout << "removing: " << myQueue.remove() << endl;
	}
	**/

	/** Queue Testing
	GenQueue myQueue(10);

	myQueue.insert('J');
	myQueue.insert('E');
	myQueue.insert('R');
	myQueue.insert('R');
	myQueue.insert('I');
	myQueue.insert('C');
	myQueue.insert('K');

	cout << "removing: " << myQueue.remove() << endl;
	cout << "peeking: " << myQueue.front() << endl;

	while (!myQueue.isEmpty())
	{
		cout << "removing: " << myQueue.remove() << endl;
	}
	**/

	/** Stack Testing
	//GenStack myStack(10); //char array-stack of size 10
	NodeStack myStack('J'); //char array-stack with '9' as first element

	cout << "Inserting: J,E,R,R,I,C,K" << endl;
	//myStack.push('J');
	myStack.push('E');
	myStack.push('R');
	myStack.push('R');
	myStack.push('I');
	myStack.push('C');
	myStack.push('K');

	cout << "stack size: " << myStack.getSize() << endl;
	cout << "peeking: " << myStack.peek() << endl;
	cout << "stack size: " << myStack.getSize() << endl;
	cout << "popping: " << myStack.pop() << endl;

	while (!myStack.isEmpty())
	{
		cout << "popping: " << myStack.pop() << endl;
	}
	**/

	/** HashMap Testing **/
	HashMap<string> hmap(13);
	string elems [8] = {"Jerrick", "Donnell", "Adam", "Mary", "Maggie", "Bryan", "Johnathan", "Brad"};

	//cout << hmap.hashData(elems[0]) << endl;
	//cout << hmap.hashData(elems[1]) << endl;
	//cout << hmap.hashData(elems[2]) << endl;
	//cout << hmap.hashData(elems[3]) << endl;
	//cout << hmap.hashData(elems[4]) << endl;
	//cout << hmap.hashData(elems[5]) << endl;
	hmap.insert("Aldrine");

	for(int i = 0; i < 8; i++)
	{
		cout << "hash: " << hmap.hashData(elems[i]) << " - " << elems[i] << endl;
		hmap.insert(elems[i]);
	}

	//hmap.insert(elems[1]);
	//hmap.insert(elems[2]);
	//hmap.insert(elems[3]);
	//hmap.insert(elems[4]);
	//hmap.insert(elems[5]);

	cout << "Printing..." << endl;
	hmap.print();

	cout << "Removing " << elems[0] << endl;
	hmap.remove(elems[0]);

	cout << "Printing..." << endl;
	hmap.print();

	cout << "Program exited succesfully." << endl;
	exit(0);
}
