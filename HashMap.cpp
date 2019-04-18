#include <iostream>
#include "HashMap.h"

using namespace std;

template <typename K>
inline HashNode<K>::HashNode()
{
	next = NULL;
}

template <typename K>
inline HashNode<K>::HashNode(K k)
{
	key = k;
	next = NULL;
}

template <typename K>
inline HashNode<K>::~HashNode() {} //wala

//////////////////////////////////////////

template <typename K>
HashMap<K>::HashMap()
{
	size = 10;
	array = new HashNode<K>*[size];
}

template <typename K>
HashMap<K>::HashMap(int s)
{
	size = s;
	array = new HashNode<K>*[size];
}

template <typename K>
HashMap<K>::~HashMap()
{
	for(int i = 0; i < size; i++)
	{
		while (!(array[i] == NULL)) //ll.isEmpty()
		{
		    HashNode<K> *old = array[i];	//save current node. (old->data should be saved?)

		    array[i] = old->next;		//change front pointer to next node

		    old->next = NULL;		//set old.next pointer to nothing
		    delete old;			//delete old, it's been allocated
		}
		//delete array[i];
	}
	//delete[] array;
}

template <typename K>
int HashMap<K>::hashData(K key)
{
	return hashRegular(key);
}

template <typename K>
void HashMap<K>::insert(K key)
{
	/**
	HashNode<K> *prev = NULL;
	int hash = hash(key);
	HashNode<K> *entry = array[hash];

	while (entry != NULL)
	{
		prev = entry;
		entry = entry->next;
	}
	if (entry == NULL)
	{
		entry = new HashNode<K>(key); //new node with key
		if (prev == NULL)
		{
			array[hash] = entry;
		}
		else
		{
			prev->next = entry;
		}
	}
	else //entry != null
	{
		entry->value = key;
	}
	size++;
	**/
	//cout << "Inserting " << key << "..." << endl;

	HashNode<K> *node = new HashNode<K>(key);
	int hash = hashData(key);

	if (!array[hash]) //if null
	{
		//cout << "Nothing in index " << hash << endl;
		array[hash] = node;
	}
	else
	{
		//cout << "Something in index " << hash << endl;

		//HashNode<K> *last = array[hash];


		HashNode<K> *last = array[hash];
		if (last->next == NULL) //if only one node
		{
			last->next = node;
		}
		else
		{
			while (last->next) last = last->next;
			last->next = node;
		}
	}
	//size++;

	/**
	if (array[hash] == NULL)
	{
		array[hash] = entry;
	}
	else
	{
		HashNode<K> *curr = array[hash];
		while (curr->next != NULL)
		{
			curr = curr -> next;
		}
		curr -> next = entry;
	}
	size++;
	**/
}

template <typename K>
int HashMap<K>::remove(K key)
{
	int hash = hashData(key);

	int index = 0;
	HashNode<K> *prev = NULL;
	HashNode<K> *curr = array[hash]; //front node

	while (curr != NULL && curr->key != key)
	{
		index++;
		prev = curr;
		curr = curr->next;
	}


	//if key wasn't in linkedlist
	if (curr == NULL) return -1;


	//unlink node from linked list
	if (index != 0)
	{
		prev->next = curr->next;
		delete curr;
	}
	else //index = 0
	{
		if (array[hash]->next != NULL)
		array[hash] = curr->next; //move pointer to next
		curr->next = NULL;
		delete curr;
	}

	return index;

	/**
	int hash = hashData(key);

	HashNode<K> *node = array[hash]; //front node

	while (node != NULL)
	{
		if (node->key == key) break;
		else node = node->next;
	}
	return node->key;
	**/
}

template <typename K>
void HashMap<K>::find(K key)
{
	int hash = hashData(key);
	bool found = false;
	int index = -1;

	if (array[hash] == NULL)
	{
		cout << key << " is not in the HashMap" << endl;
	}
	else
	{
		HashNode<K> *curr = array[hash];
		while (curr->next != NULL)
		{
			index++;
			if (curr->data == key)
			{
				found = true;
				break;
			}
			else curr = curr -> next;
		}

		if (found)
			cout << "Hash: " << hash << ", LLIndex: " << index << endl;
		else
			cout << "Hash: " << hash << ", LLIndex: not found" << endl;
		}
}

template <typename K>
void HashMap<K>::print()
{
	//for each array[i]
	for(int i = 0; i < size; i++)
	{
		if (array[i] == NULL)
			cout << "Hash: " << i << ", No keys exist" << endl;
		else //each linked list
		{
			int index = -1;
			HashNode<K> *current = array[i];

			while (current)
			{
				index++;
				cout << "Hash: " << i << " - LL[" << index << "] " << current->key << endl;
				current = current->next;
			}
		}
	}
	cout << "Done printing." << endl;
}

template <typename K>
int HashMap<K>::getSize()
{
	return size;
}

template <typename K>
bool HashMap<K>::isEmpty()
{
	for(int i = 0; i < size; i++)
	{
		if (array[i] != NULL) return true;
	}
	return false;
}

////PRIVATE//

template <typename K>
int HashMap<K>::hashRegular(K key)
{
	int sum = 0;
	for (int i = 0; key[i] != '\0'; i++)
		sum += key[i];
	//cout << sum << " % " << this->size << endl;
	if (key == "Aldrine") cout << "sum: " << sum << endl;
	return sum % this->size;
}
