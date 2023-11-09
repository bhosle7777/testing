#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter table no : ";
	cin>>n;
	cout<<"Table of "<<n<<" is :";
	for(int i = 1; i<11; i++){
		cout<<n *i<<"\t";
	}
}
