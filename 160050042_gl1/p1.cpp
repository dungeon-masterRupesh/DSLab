#include "LinkedList.h"
LinkedList::node* reverse(LinkedList::node * head, int k){
	// int lenList = this->count();
	// int loop = lenList / k;
	// int final = lenList % k;
	int indexRunning = 0;
	LinkedList::node * out = NULL;
	if (head == NULL) return NULL;
	// LinkedList::node * end = NULL;
	// for (int i = 0; i < loop; ++i)
	// {
	// 	/* code */
	// 	// * begin = NULL;
	// 	//node * bend = NULL:
	// 	LinkedList temp;
	// 	LinkedList::node * tempo = getAddress(k*i);
	// 	for (int j = 0; j < k; ++j)
	// 	{
	// 		/* code */
	// 		// node * tempo = getAddress(k*i + j);
	// 		temp.insertEnd(tempo->data);
	// 		while(tempo->next != NULL){
	// 			tempo = tempo->next;
	// 		}

	// 	}
	// 	temp.reverse();
	// 	if (i == 0) out = temp.head();
	// }
	// if(loop == 0){return LinkedList::node * this->reverse(head,lenList);}
	// else{
	// 	out = this->getAddress(k-1);
	// 	if (k == 1) return out;
	// 	else{
	// 	}
	// }
	LinkedList::node* newhead = head;
	for (int i = 0; (i < k) & newhead !=NULL; ++i)
	{
		/* code */
		newhead=newhead->next;
	}
	LinkedList::node* prev = NULL;
	LinkedList::node* current = head;
	LinkedList::node* next;
	if(newhead!=NULL){prev = reverse(newhead,k);}
	while(current != NULL && indexRunning < k) {
		next  = current->next;  
		current->next = prev;   
		prev = current;
		current = next;
		indexRunning++;
	}
	head = prev;
	return head;

}