#include<iostream>
using namespace std; 
  
class PrepInsta 
{ 
public:
    int var; 
    
    PrepInsta(int x) {
        var = x; 
    } 
    PrepInsta(const PrepInsta &obj) {
        var = obj.var; 
    }
}; 
 // Deep Copy constructor
int main() 
{
    PrepInsta obj1(10);
    PrepInsta obj2 = obj1; 
  
    cout << "Before value change - " << endl;
    cout << "obj1.var = " << obj1.var << endl; 
    cout << "obj2.var = " << obj2.var << endl;
    
    obj1.var = 20;
    cout << "\nAfter value change - " << endl;
    cout << "obj1.var = " << obj1.var << endl; 
    cout << "obj2.var = " << obj2.var << endl;
    return  0; 
}
