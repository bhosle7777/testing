#include<iostream>
#include<memory>
using namespace std;

class demo{
    public:
        demo(){
            cout<<"In demo constructor : "<<endl;  
        }
        ~demo(){
            cout<<"In Demo Destructor : "<<endl;
        }
};
class demo1 : virtual public demo{
    public:
        demo1(){
            cout<<"In demo 1 constructor : "<<endl;
            }
        ~demo1(){
            cout<<"In demo 1 Destructor : "<<endl;
        }
};

int main(){
    // demo1 *d1 = new demo1;
    // demo *d = d1;

    unique_ptr<demo1> d1(new demo1());
    unique_ptr<demo> d = move(d1);


}