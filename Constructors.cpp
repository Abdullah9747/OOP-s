#include<iostream>
using namespace std;

class Student {
public:
	string name;
	Student(string name) {
		this->name = name;
	}
};
void main() {
	Student obj1("Abdullah");
	obj1.name = "Ali";
	Student obj2(obj1); // Copy Constructor
	cout << obj2.name << endl;	
		

	obj2.name = "Abdullah";
	cout << obj1.name << endl;
}