// Exercise 2 in Cpp
#include <iostream>
#include <string.h>

int main()
{
	using namespace std;
	cout << "Write your first name:"<<endl;
	string  name;
	cin  >> name;
	if (name == "") {
		name = "Cache";
	}
	cout <<"Hello "<<  name << ". How are you?"<< endl;
	return 0;
}
