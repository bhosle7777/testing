#include <iostream>
using namespace std;

class A {
public:
   virtual void f() { cout << "A::f()" << endl; };
};

class B : virtual public A {
public:
   void f() { cout << "B::f()" << endl;};
};

class C : virtual public A {
public:
   void f() { cout << "C::f()" << endl;};
};

class D : public B , public C{ 
	public:
	   void f() { cout << "D::f()" << endl;};
};

int main() {

    D d;
    A *a = &d;

    a->f();
}
