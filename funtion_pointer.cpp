#include <iostream>
 using namespace std;
 
 int add(int a, int b)
 {
 	int c = a + b;
 	
 	cout<<"Addition" <<c;
 	return c;
 }
 
 int main()
 {
 
 	int (*aptr)(int , int);
 	
 	aptr = add;
 	
	int sum = aptr(5, 4);
	
	cout<<"return Sum"<<sum;
 
 }
