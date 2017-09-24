#include "String.h"

//to compile use : g++ String.cpp main.cpp

int length(const char *x){
	if(x==NULL) return 0;
	int len=0;
	while(x[len]!='\0') len++;
	return len;
}

String::String(){					//default constructor
	c=NULL;
}

String::String(const char *a){

	int len = length(a);
	char *n = new char[len];
	for (int i = 0; i < len; ++i)
	{
		/* code */
		n[i] = a[i];
	}
	c = n;	

	
}

String::String(const String &b){	//copy constructor
	// int len;
	// if (a==NULL){c = NULL}
	// else{
		// int len = 0;
		// while(a[len]!='\0') len++;
		// char *n = new char[len];
		// for (int i = 0; i < len; ++i)
		// {
		// 	/* code */
		// 	n[i] = a[i];
		// }
		// n[len] = '\0';
		// c = n;
//}
	char *a = b.c;
	int len = length(a);
	char *n = new char[len];
	for (int i = 0; i < len; ++i)
	{
		/* code */
		n[i] = a[i];
	}
	c = n;

}

String::~String(){
	delete[] c;
}

String& String::operator=(const char* a){		// constant char* represents a string constant
		
	int len = length(a);
	char *n = new char[len];
	for (int i = 0; i < len; ++i)
	{
		/* code */
		n[i] = a[i];
	}
	c = n;
	//return this;
}

String& String::operator=(const String &b){
		char *a = b.c;
	int len = length(a);
	char *n = new char[len];
	for (int i = 0; i < len; ++i)
	{
		/* code */
		n[i] = a[i];
	}
	c = n;
	//return this;

}

String String::operator+(const String &b){
	// String ret;
	char *a = b.c;
	int len = length(a);
	char *n = new char[len];
	int len2 = length(c);
	for (int i = 0; i < len2; ++i)
	{
		/* code */
		n[i] = c[i];
	}
	for (int i = 0; i < len2; ++i)
	{
		/* code */
		n[i+len2] = a[i];
	}
	String res(n);
	return res;


}


void String::print(){
 
	if(c==NULL) cout<<"NULL"<<endl;
	else{int len=0;
		if(c[len]=='\0') cout<<"";
		else {while(c[len]!='\0') {
					cout<<c[len];
					len++;	}cout<<endl;}
			
		}

}