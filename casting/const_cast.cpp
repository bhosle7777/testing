#include<iostream>
using namespace std;

int fun(int *n){
	
	return (*n + 10);
}

int main(){
	const int a = 10;
	const int *ptr = &a;
	
	int *ptr1 = const_cast<int*>(ptr);
	// by using const cast remove constness of variable
	
	cout<<"Const Cast : "<<fun(ptr1)<<endl;

}
