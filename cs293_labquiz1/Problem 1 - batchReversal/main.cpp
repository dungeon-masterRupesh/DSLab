#include "LinkedList.h"
using namespace std;

int main() {
	LinkedList myList;
	int len, temp, k;
	cin >> len >> k;
	for (int i = 0; i < len; ++i)
	{
		cin >> temp;
		myList.insertEnd(temp);
	}
	LinkedList::node* ne = reverse(myList.head, k);
	
	if(ne == NULL) {
		cout << "NULL" << endl;
		return 0;
	}
	LinkedList::node * tempNode = ne;
	while(tempNode != NULL) {
		cout << tempNode->data << " ";
		tempNode = tempNode->next;
	}
	cout << endl;
	return 0;
}