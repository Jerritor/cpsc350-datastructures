#include <iostream>
//#include "GenQueue.h"
//#include "GenStack.h"
//#include "LinkedList.h"
#include "DoubleLinkedList.h"

using namespace std;

int main()
{
	/** Doubly LinkedList Testing**/
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

	return 0;
}
