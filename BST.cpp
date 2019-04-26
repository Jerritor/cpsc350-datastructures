#include <iostream>
#include "BST.h"

using namespace std;

TreeNode::TreeNode()
{
	left = NULL;
	right = NULL;
}

TreeNode::TreeNode(int d)
{
	left = NULL;
	right = NULL;
	data = d;
}

TreeNode::~TreeNode()
{
	//research
}

////////

BST::BST()
{
	root = NULL;
}

BST::~BST()
{
	//iterate and delete
	//research this
}

void BST::printTree()
{
	recPrint(root);
}

void BST::recPrint(TreeNode *node)
{
	if(node == NULL) return;

	recPrint(node->left);
	cout << node-> << endl;
	recPrint(node->right);
}

void BST::isEmpty()
{
	return (root == NULL);
}

void BST::insert(int value)
{
	//make sure value doesn't exist

	TreeNode *node = new TreeNode(value);
	if(root == NULL) //empty BST
	{
		root = node;
	}
	else
	{
		TreeNode *current = root;
		TreeNode *parent; //empty node

		while(true)
		{
			parent = current;
			if(value < current->key)
			{
				current = current->left;
				if(current == NULL)
				{
					parent->left = node;
					break;
				}
				//else keep looking
			}
			else //go right
			{
				current = current->right;
				if(current == NULL)
				{
					parent->right = node;
					break;
				}
			}
		}
	}
}

bool BST::contains(int value)
{
	if(isEmpty()) return false;
	else
	{
		TreeNode *current = root;
		while(current->key != value)
		{
			if (value < current->key) //go left
			{
				current = current->left;
			}
			else current = current->right;

			if(current = NULL) return false;
		}
	}
}

bool BST::deleteR(int k) //delete() is usually an existing func
{
	if(isEmpty()) return false;

	//check if key/value exists before continuing to delete

	TreeNode *current = root;
	TreeNode *parent = root;
	bool isLeft = true;

	while (current->key != k)
	{
		//node search
		parent = current;
		if (k < current->key)
		{
			isLeft = true;
			current = current->left;
		}
		else
		{
			isLeft = false;
			current = current->right;
		}

		//can be checked first and after child-searching
		if(current == NULL) return false;

		//we found our node at this point
		//node deletion
		if(current->left == NULL && current->right == NULL) //no children, leaf node
		{
			//check if tree is just a one node/root
			if(current == root)
				root = NULL;
			else if (isLeft)
				parent->left = NULL;
			else //isRight
				parent->right = NULL;
		}
		//if one child
		else if(current->right == NULL) //no right child
		{
			if (current == root)
			{
				root = current->left;
			}
			else if(isLeft) //is a left child
			{
				parent->left = current->left;
			}
			else //is a right child
			{
				parent->right = current->left;
			}
		}
		else if(current->left == NULL) //no left child, exact opposite of above
		{
			if (current == root)
			{
				root = current->right;
			}
			else if(isLeft)
			{
				parent->right = current->right;
			}
			else
			{
				parent->right = current->right;
			}
		}
		else //two children
		{
			//find the successor of node to be deleted
			TreeNode *successor = getSuccessor(current);
			if (current == root)
				root = successor;
			else if(isLeft)
			{
				parent->left = successor;
			}
			else
			{
				parent->right = successor;
			}

			successor->left = current->left;
		}
		return true;
	}
}

TreeNode* BST::getSuccessor(TreeNode *d) //*d is node to be deleted
{
	TreeNode *sp = d; //successor's parent
	TreeNode *successor = d;

	//one right, all the way to the left-most child: successor is larger than sp
	//one left, all the way to the right-most child: successor is less than sp
	TreeNode *current = d->right; //1 right, all left

	while(current != NULL)
	{
		sp = successor;
		successor = current;
		current = current->left;
	}

	if(successor != d->right)
	{
		sp->left = successor->right; //sp's left points to successor's child
		successor->right = d->right;
	}
	return successor;

}
