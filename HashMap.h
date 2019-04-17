#include <iostream>

using namespace std;

template<typename K> //value is found using hash()
class HashNode
{
  public:
    HashNode(K k);
    ~HashNode();
	K key;

	HashNode *next; //this->next
};

template <typename K>
class HashMap
{
  public:
  	  void insertNode(K);

  	  HashMap(); //default size
	  HashMap(int size);
	  ~HashMap();

	  int hash(K key); //returns value

	  void insert(K key); //inserts key into hash table
	  int delete(K key); //returns array index where it was stored
	  int find(K key); //give array value where it's stored

	  void print();
	  int getSize();
	  bool isEmpty();
  private:
	  int size = 10; //size of array
	  int hashChain(K key);
};
