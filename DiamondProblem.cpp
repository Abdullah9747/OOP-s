#include <iostream>
using namespace std;

class A {
public:
	 void print() {
		cout << "Diamond Problem" << endl;
	};
};

class B :virtual public A {
public:
	int x = 0;
	
};
class C :virtual public A {
public:
	int y = 0;
};

class D : public B, public C {

};
int main() {
	D obj;
	obj.print();

}