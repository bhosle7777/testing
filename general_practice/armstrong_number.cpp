// if the sum of its own digits raised to the power number of digits gives the number itself
//eg 153 = 
//date 1 Aug 2023 11;56


#include<iostream>
using namespace std;

int power(int c, int n) {
	int p = 1;
	while(c) {
		p *=  n;
		c--;
	}
	cout<<"power value of "<<n<<" : "<<p<<endl;
	return p;
}

int main(){
	
	int num, num1, num2, num3, sum = 0, count = 0;
	
	cout<<"Enter the positive number: ";
	cin>>num;
	
	num1 = num;
	num3 = num;
	
	do{
		num = num / 10;
		count++;
	}while(num != 0);
	
	cout<<"Count of number is: "<<count<<endl;

	do{
		num2 = num1 % 10;
		sum = sum + power(count, num2);
		num1 = num1 / 10;
	}while(num1 != 0);
	
	cout<<"Sum of power is: "<<sum<<endl;
	
	if(sum == num3)
		cout<<"Number is Armstrong"<<endl;
	else
		cout<<"Number is not Armstrong"<<endl;
	
}
