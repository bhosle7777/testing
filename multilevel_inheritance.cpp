#include<iostream>
using namespace std;

class vehical{
	public:
		vehical(){
			cout<<" This is vehical"<<endl;
		}
};
class fourwheeler: public vehical{
	public:
		fourwheeler(){
			cout<<" object with four wheeler"<<endl;
		}
};

class car: public fourwheeler{
		public:
			car(){
				cout<<" Four wheeler"<<endl;
			}
};

int main(){
	car c;
	return 0;
}
