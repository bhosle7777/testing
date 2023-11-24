#include<iostream>
using namespace std;

int main(){
	int a;
	double b = 9857634.99;	
	
	a = static_cast<int>(b);
	
	cout<<"Static cast : "<<a<<endl;
}
