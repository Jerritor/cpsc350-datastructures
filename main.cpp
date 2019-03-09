#include <iostream>
//#include "GenQueue.h"
//#include "GenStack.h"
#include "LinkedList.h"

using namespace std;

int main()
{
	/** LinkedList Testing **/
	NaiveList ll;

	cout << "Inserting 4,3,2,1..." << endl;
	ll.insertFront(4);
	ll.insertFront(3);
	ll.insertFront(2);
	ll.insertFront(1);

	cout << "Index of 3: " << ll.find(3) << endl;
	cout << "Removing: " << ll.removeFront() << endl;
	cout << "Peeking: " << ll.peek() << endl;
	cout << "Removing: " << ll.removeFront() << endl;

	cout << "Deleting Index 2...:" << ll.deletePosition(2) << endl;

	cout << "Printing Remaining" << endl;
	ll.printList();


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
