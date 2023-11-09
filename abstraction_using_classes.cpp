#include<iostream>
using namespace std;
 
class Vehicle
{
	private:
		void piston()
		{
		    cout<<"4 piston\n";
		}
	private:
		void manWhoMade()
		{
		    piston();
		    cout<<"Markus Librette\n";
		}
	public:
		void company()
		{
		    manWhoMade(); /// two priavte funtions access in public 
		    cout<<"GFG\n";
		}
	public:
		void model()
		{
		    cout<<"SIMPLE\n";
		}
	public:
		void color()
		{
		    cout<<"Red/GREEN/Silver\n";
		}
	public:
		void cost()
		{
		    cout<<"Rs. 60000 to 900000\n";
		}
	public:
		void oil()
		{
		    cout<<"PETRO\n";
		}
};
int main()
{
     
    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();
}
