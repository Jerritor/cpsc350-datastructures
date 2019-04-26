#include <iostream>
using namespace std;

struct Node
{
    T data;
    struct Node* left, *right;
    
	Node(T data)
    {
        this->data = data;
        left = right = NULL;
    }

	Node(T data, Node<T> left, Node<T> right) {
        this->value = val;
        this->left = left;
        this->right = right;
    }
};

template class<T>
class BST
{
	BST::BST()
	{
	}

	BST::~BST();
	{
	}

	void BST::insert(int data)
	{
		Node *node = new Node(data);
		if (root == NULL) //empty BST
		{
			root = node; //creating a new list
		}

		Node *current = root;
		Node *parent;   //initialize empty

		while(true)
		{
			parent = current;
			if (data < current.key) //left
			{
			}
			else
			{
			}
		}
	}

	bool contains(int value)
	{
		//to be implemented
	}


	TreeNode* getSuccessor(TreeNode k)
	{
		//to be implemented
	}

	bool deleteRec()
	{
		//to be implemented
	}

	TreeNode delete(int k)
	{
		//to be implemented
	}

	int size()
	{
		//to be implemented
	}

	bool isEmpty()
	{
		//to be implemented
	}

	TreeNode root()
	{
		//to be implemented
	}


	int depth(TreeNode p); //recursive
	{
		if (p.isRoot()) return 0;
		else return 1 + depth(p->root)
	}

	int height(TreeNode p); //recursive
	{
		if (node == NULL) return 0; 
   		else
    	{ 
        	/* compute the depth of each subtree */
        	int lDepth = height(node->left);  //left
        	int rDepth = height(node->right); //right
      
        	/* use the larger one */
        	if (lDepth > rDepth) return(lDepth + 1); 
        	else return(rDepth + 1); 
    	} 

	}

	TreeNode[] positions()
	{
	}

	void printPreorder(Node* node) //root, left, right
	{
		if(node == NULL) return;
		cout << node->data << " ";  //first print data of node
    	printPreorder(node->left);  //then recur on left sutree
    	printPreorder(node->right); //now recur on right subtree
	}

	void printInorder(Node* node) //left, root, right
	{
		if(node == NULL) return;
		printInorder(node->left);  //first recur on left child
    	cout << node->data << " "; //then print the data of node
    	printInorder(node->right); //now recur on right child
	}

	void printPostorder(Node* node) //right, root, left
	{
		if(node == NULL) return;
		printPostorder(node->left);  // first recur on left subtree
    	printPostorder(node->right); // then recur on right subtree
    	cout << node->data << " ";   // now deal with the node
	}
}
