#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList() {
	head = NULL;
}

LinkedList::~LinkedList() {
	node* current = head;
	while(current != NULL) {
		node* next = current->next;
		delete current;
		current = next;
	}
	head = NULL;
}

void LinkedList::insertEnd(int val) {
	if(head == NULL) {
		head = new node();
		head->data = val;
		head->next = NULL;
		return;
	}
	node * temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = new node();
	temp->next->data = val;
	temp->next->next = NULL;
}

bool LinkedList::insertAtInd(int ind,int val) {
	int len = this->count();
	if(ind >= 0 and ind <= len-1) {
		if(ind == 0) {
			node * temp = new node();
			temp->data = val;
			temp->next = head;
			head = temp;
		}
		else {
			node * temp = head;
			int myInd = 0;
			while(myInd != ind-1) {
				temp = temp->next;
				myInd += 1;
			}
			node * newNode = new node();
			newNode->data = val;
			newNode->next = temp->next;
			temp->next = newNode;
		} 
		return true;
	}
	else return false;
}

int LinkedList::count() {
	int cnt = 0;
	node * temp = head;
	while(temp != NULL) {
		temp = temp->next;
		cnt += 1;
	}
	return cnt;
}

void LinkedList::print() {
	if(head == NULL) {
		cout << "NULL" << endl;
		return;
	}
	node * temp = head;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int LinkedList::deleteAll(int val) {
	int ret = 0;
	node * temp = head;
	node * par = NULL;

	while(temp != NULL) {
		if(temp->data  == val) {
			ret += 1;
			if(par != NULL) {
				node * st = temp->next;
				delete par->next;
				par->next = st;
				temp = st;
			}
			else {
				head = temp->next;
				delete temp;
				temp = head;
			}
		}
		else {
			par = temp;
			temp = temp->next;
		}
	}
	return ret;
}

void LinkedList::reverse() {
	node* prev = NULL;
	node* current = head;
	node* next;
	while(current != NULL) {
		next  = current->next;  
		current->next = prev;   
		prev = current;
		current = next;
	}
	head = prev;
}

void LinkedList::midValue() {
	if(head == NULL) {
		cout << "NULL" << endl;
		return;
	}
	node * slow = head;
	node * fast = head;
	while(true) {
		if(fast->next == NULL) {
			cout << slow->data << endl;
			break;
		}
		if(fast->next->next == NULL) {
			cout << slow->data << " ";
			slow = slow->next;
			cout << slow->data << " " << endl;
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
	}
}

LinkedList::node* LinkedList::getAddress(int index) {
	int i = index;
	node* t = head;
	while(i-->0) {
		t = t->next;
	}
	return t;
}