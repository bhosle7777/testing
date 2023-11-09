#include<iostream>
using namespace std;

class vehical{
	public:
		vehical(){
			cout<<" This is vehical"<<endl;
		}
};
class fourwheeler{
	public:
		fourwheeler(){
			cout<<" This is four wheeler"<<endl;
		}
};

class car: public vehical, fourwheeler{

};

int main(){
	car c;
}
