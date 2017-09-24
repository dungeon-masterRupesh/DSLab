#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList()
{
	head = NULL;
}

template <class T>
LinkedList<T>::~LinkedList()
{
	node * k;
	node * l;
	k = head;
	l=k;
	if (k==NULL){}
	else {
		while(k!=NULL){
			k=k->next;
			delete l;
			l=k;
		}
	} 	
}

template <class T>
void LinkedList<T>::insertEnd(T val)
{
    node *a = new node;	
    a->data = val;
    a->next = NULL;
    node * k;
    node * prev;
    prev = NULL;
    k = head;
 while(k!=NULL){
 	prev = k;
 	k=k->next;
 }
 if(prev==NULL){head = a;}
 	else{prev->next = a;}
 //cout<<k<<"  "<<&a<<endl<<head<<"\n";
}
template <class T>
bool LinkedList<T>::insertAtInd(int ind,T val)
{
	if (head==NULL){return false;}
	else if (ind == 0){
		node * g;
		g = head;
		node *n = new node;
		n->data = val;
		n->next = g;
		head = n;
	}
	else{
		node * crnt;
		node * prev;
		int current_ind = 0;
		crnt=head;
		prev = NULL;
		while(crnt!=NULL && current_ind < ind){
			prev =	crnt;
			crnt = crnt->next;
			current_ind++;
		}
		if (current_ind == ind){
			node *n = new node;
			n->data = val;
			n->next = crnt;
			prev->next=n;
			return true;
		}
		else {
			return false;
		}
	}
}

template <class T>
int LinkedList<T>::count()
{int k;
	k=0;
	node *a;
	a=head;
	while(a!=NULL){
		a=a->next;
		k++;
	}
	return k;		
}
template <class T>
void LinkedList<T>::print()
{	//cout<<"PRINT\n";
	node * k;
	k = head;
	if (k==NULL){
		cout<<"NULL\n";
	}
	else {
		//cout<<k->data<<"ck"<<endl;
		while(k!=NULL)
			{cout<<k->data<<" ";
				k=k->next;
			}
			cout<<endl;
		}
}

template <class T>
int LinkedList<T>::deleteAll(T val)
{
	node * crnt;
	node * prev;
	crnt = head;
	prev = NULL;
	int del;
	del = 0;
	while(crnt!=NULL){
		if(val==crnt->data){
			crnt=crnt->next;
			if(prev==NULL){
				head=head->next;
			}
			else{
				prev->next=crnt;
			}
		del++;
		}
		else {
			prev = crnt;
			crnt = crnt->next;
		}
	}
return del;
}

template <class T>
void LinkedList<T>::reverse()
{
	if (head==NULL){}
		else{
			node * crnt;
			node * prev;
			crnt = head;
			prev = NULL;
			while(crnt!=NULL){
				node * temp;
				temp = crnt->next;
				crnt->next=prev;
				prev=crnt;
				crnt=temp;
			}
			head = prev;
		}
}

template <class T>
void LinkedList<T>::midValue()
{
	if(head==NULL){
		cout<<"NONE\n";
	}
	else{
		node * mid;
		node * prev;
		int cont=0;
		node * cur;
		cur = head;
		mid = head;
		while(cur!=NULL){
			if (cont == 0){
				cur = cur->next;
				cont++;
			}
			else{
				cont=0;
				cur=cur->next;
				prev=mid;
				mid=mid->next;
				}

		}
		if (cont==0){cout<<prev->data<<" "<<mid->data<<endl;}
		else{
			cout<<mid->data<<endl;
		}
	}
}

template <class T>
void LinkedList<T>::mergePoint(LinkedList<T> * oth)
{
}