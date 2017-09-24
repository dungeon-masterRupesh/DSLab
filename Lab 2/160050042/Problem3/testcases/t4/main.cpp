#include "String.h"

int main(){
	String a,b,c,d("stu");
	a = "abc";
	b = "pqr";
	c = a+b;
	c.print();
	c = c+d;
	c.print();

	c = c+"efg";
	c.print();
}