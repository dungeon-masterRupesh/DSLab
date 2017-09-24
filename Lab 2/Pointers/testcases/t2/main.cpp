#include "String.h"

int main(){
	String a;			
	String b("pqr");
	a.print();
	b.print();	

	a=b;
	a.print();

	b=a;			
	b.print();
	a.print();

	a=b;
	a.print();
	b.print();

	String c;
	a=c;
	a.print();
	c.print();

	c=a;
	a.print();
	c.print();
}