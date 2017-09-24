#include "String.h"

int main(){
	String a;			
	String b("pqr");
	a.print();
	b.print();	

	a=b;
	a.print();
	
	a="abc";
	a.print();
	b.print();

	b=a;
	a.print();
	b.print();

	b="def";
	a.print();
	b.print();
}