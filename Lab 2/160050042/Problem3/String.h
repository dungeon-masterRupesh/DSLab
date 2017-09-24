#include <iostream>

using namespace std;

class String{
	char *c;									//pointer that stores string - string ending with '\0'
	
public:
	String();									//empty constructor
	String(const char *a);						//constructor
	String(const String &a);					//copy constructor

	String& operator=(const char* a);			//assignment operator
	String& operator=(const String &a);

	String operator+(const String &a);			//Concatenation operator

	void print();								//Print 'NULL' if c is NULL, else print the corresponding string

	~String();									//destructor
};