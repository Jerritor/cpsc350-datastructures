#import <iostream>
using namespace std;

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
