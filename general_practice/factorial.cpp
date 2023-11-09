#include<iostream>
using namespace std;

int main(){
	int n, no, fact = 1;
	cout<<"Enter number for calculating factorial : ";
	cin>>n;
	
	no = n;
	while(n != 0){
		fact = fact * n;
		n--;
	}
	cout<<"factorial of "<<no<<" is : "<<fact<<endl;
}
