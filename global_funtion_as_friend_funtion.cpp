#include<iostream>
using namespace std;

class base{
	private:
		int privatevarible;
	protected:
		int protectedvarible;
	public:
	base(){
		privatevarible = 10;
		protectedvarible = 20;
	}

	friend void friend_funtion(base&);	
};

void friend_funtion(base &b){
	cout<<"Private varibale: "<<b.privatevarible<<endl;
	cout<<"Protected variable: "<<b.protectedvarible<<endl;
}

int main(){
	base b;
	friend_funtion(b);
}
