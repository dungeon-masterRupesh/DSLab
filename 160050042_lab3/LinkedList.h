#include <iostream>
using namespace std;

template<class T>
class LinkedList {	
	struct node {
		T data;
		node * next;
	};

	public:
	node * head;

	LinkedList();
	~LinkedList();

	void insertEnd(T val);
	bool insertAtInd(int ind,T val);
	int count();
	void print();
	int deleteAll(T val);
	void reverse();
	void midValue();
	void mergePoint(LinkedList<T> * oth);
};