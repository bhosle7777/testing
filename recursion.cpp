#include <iostream>

using namespace std;

int demo(int n){
	
	if(n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	else
		return demo(n-1) + demo(n-2);
}

int main(){

	
	for(int i = 0; i < 10; i++){
		cout<<demo(i)<<"\t";
	}
}
