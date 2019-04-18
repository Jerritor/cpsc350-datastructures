#include <iostream>

using namespace std;

#ifndef HASHNODE
#define HASHNODE
template<typename K> //value is found using hash()
class HashNode
{
  public:
	HashNode();
    HashNode(K k);
    ~HashNode();
	K key;
	HashNode<K> *next; //this->next
};
#endif

#ifndef HASHMAP
#define HASHMAP
template <typename K>
class HashMap
{
  public:
  	  HashMap(); //default size
	  HashMap(int s);
	  ~HashMap();

	  int hashData(K key); //returns value

	  void insert(K key); //inserts key into hash table
	  int remove(K key); //returns ll index where it was stored
	  void find(K key); //give array value where it's stored

	  void print();
	  int getSize();
	  bool isEmpty();
  private:
	  int size; //size of array
	  int hashRegular(K key);
	  HashNode<K>** array; //array of pointers
	  //different from an array of nodes
};
#endif
