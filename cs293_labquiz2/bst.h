#include <iostream>
using namespace std;



class bst
{
	public:
		struct treenode
	{
		int value;
		treenode * ltree;
		treenode * rtree;
		treenode * parent;
	};
	

	treenode * root;
	bst();
	~bst();
	void insert(int num);
	void preorder(treenode* t);
	void postorder(treenode* t);
	void inorder(treenode* t);
	bool search(int val);
	void delet(int val);
	void lca(int n1 , int n2);
	void lt(int n1, int n2);
};


