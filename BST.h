#pragma once
#include <iostream>

using namespace std;

class TreeNode
{
	public:
		TreeNode();
		TreeNode(int k);
		virtual ~TreeNode(); //why a virtual destructor

		bool isRoot();
		bool isExternal();
		int getData();

		TreeNode *left;
		TreeNode *right;
		TreeNode *root; //also known as parent
	private:
		int key;
};

class BST
{
	public:
		BST();
		~BST();

		void insert(int k);
		bool contains(int value);
		TreeNode* getSuccessor(TreeNode k);
		bool deleteRec();
		TreeNode delete(int k);

		int size();
		bool isEmpty();
		TreeNode root();
		int depth(TreeNode p); //recursive
		int height(TreeNode p); //recursive
		TreeNode[] positions();

		void printPreorder();
		void printInorder();
		void printPostorder();
	private:
		TreeNode *parent;
		unsigned int size;
};
