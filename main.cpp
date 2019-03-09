#include <iostream>
//#include "GenQueue.h"
//#include "GenStack.h"
#include "LinkedList.h"

using namespace std;

int main()
{
	/** LinkedList Testing **/
	NaiveList ll;
	ll.insertFront(4);
	ll.insertFront(3);
	ll.insertFront(2);
	ll.insertFront(1);

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
