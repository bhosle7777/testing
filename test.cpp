#include <iostream>
using namespace std;
class Base
{
    public:
        Base ()
        {
            cout << "Default of Base" << endl;
        }
        Base (int x)
        {
            cout << "Param of Base " << x << endl;
        }
};

class Derived : public Base
{
    public:
        Derived ()
        {
            cout << "Default of Derived" << endl;
        }
};

int main()
{
    //Derived d;
    Base b(10);
}
