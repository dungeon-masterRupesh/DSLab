#include <iostream>
#include "bst.h"

using namespace std;

int main(int argc, char const *argv[])
{
//	cout<<"PPP";
	bst b;
// //	cout<<"b creation";
// 	b.insert(10);
// //	cout<<"InsertionDone";
// 	b.insert(2);
// //	cout<<"InsertionDone";
// 	b.insert(3);
// //	cout<<"InsertionDone";
// 	b.insert(7);
// //	cout<<"InsertionDone";

//	cout<<b.search(7);
	char k;
	cin>>k;
while(k!='0'){
	if(k == 'i'){
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			int k;
			cin>>k;
			b.insert(k);
		}
	}
	else if(k =='x'){
	b.inorder(b.root);
	cout<<endl;		
	}
	else if(k == 'y'){
		b.preorder(b.root);
	cout<<endl;	
	}
	else if (k == 'z'){	
	b.postorder(b.root);
	cout<<endl;
	}
	else if (k == 's'){
		int n;
		cin>>n;
		cout<<b.search(n)<<endl;
	}
	else if (k == 'd'){
		int n;
		cin>>n;
		b.delet(n);
	}
	else if (k == 'l'){
		int n1;
		cin>>n1;
		int n2;
		cin>>n2;
		if(b.search(n1) && b.search(n2)){
			b.lca(n1,n2);
		}
		else {cout<<-1<<endl;}
	}
	else if (k == 't'){
		int n1;
		cin>>n1;
		int n2;
		cin>>n2;
		if(b.search(n1) && b.search(n2)){
			b.lt(n1,n2);
		}
		else {cout<<-1<<endl;}		
	}


cin>>k;}


	return 0;

}
