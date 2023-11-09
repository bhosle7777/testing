#include<iostream>
using namespace std;

int main(){
	
	int num, b, rev = 0;
	
	cout<<"Enter the positive number: ";
	cin>>num;
	b = num;
	do{
		b = num % 10;
		rev = (rev *10) + b;
		num = num / 10;

	}while(num != 0);
	cout<<"The Reverse Number is : "<<rev<<endl;
	
	if(num == rev)
		cout<<"The Number is Palindrom"<<endl;
	else 
		cout<<"The Number is not Palindrom"<<endl;
}
