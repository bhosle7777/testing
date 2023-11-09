// the sequence of numbers in which each number in the sequence is equal to the sum of two numbers before it. 
// eg. 0, 1, 1, 2, 3, 5, 8, 13, 21

#include<iostream>
using namespace std;

int main(){
	
	/*int n;
	cout<<"Enter Number of items : ";
	cin>>n;
	int sum[n];
	sum[0] = 0; sum[1] = 1;
	cout<<"Fibonaci Series : ";
	for(int i = 2; i < n; i++){
	
		sum[i] = sum[i - 1] + sum[i -2];
		cout<<sum[i]<<endl;
	}*/
	
//------------------------------------------------------------------
	int t1 = 0, t2 = 1, nextTerm = 0, n;

	cout << "Enter a positive number: ";
	cin >> n;

	// displays the first two terms which is always 0 and 1
	cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

	nextTerm = t1 + t2;

	while(nextTerm <= n) {
		cout << nextTerm << ", ";
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return 0;
}
