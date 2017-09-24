#include "LinkedList.cpp"
using namespace std;

int main() {
	LinkedList<int> myList;
	int t1, t2;
	char ch;
	cin >> ch;
	while(ch!='q') {
		// i for insertEnd # i <val>
		// n for insertAtInd  # n <ind> <val>
		// p for print
		// r for reverse
		// d for deleteAll # d <val>
		// c for count
		// m for midValue
		/*
		Write even io formats
		mergePoint check seperately
		*/
		if (ch == 'i') {
			cin >> t1;
			myList.insertEnd(t1);
		} else if (ch == 'n') {
			cin >> t1 >> t2;
			bool sta = myList.insertAtInd(t1, t2);
		} else if (ch == 'p') {
			myList.print();
		} else if (ch == 'r') {
			myList.reverse();
		} else if (ch == 'd') {
			cin >> t1;
			int cnt = myList.deleteAll(t1);
		} else if (ch == 'c') {
			cout << myList.count() << endl;
		} else if (ch == 'm') {
			myList.midValue();
		}
		cin>>ch;
	}
}