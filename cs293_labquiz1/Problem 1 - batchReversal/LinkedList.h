#include <iostream>
using namespace std;

class LinkedList {
	public:

		struct node {
			int data;
			node * next;
		};

		node * head;

		LinkedList();
		~LinkedList();

		void insertEnd(int val);
		bool insertAtInd(int ind,int val);
		int count();
		void print();
		int deleteAll(int val);
		void reverse();
		void midValue();
		node* getAddress(int index); // assume index < size
};

LinkedList::node* reverse(LinkedList::node * head, int k);