#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 10, 60, 20, 30, 40};
	
	int N = sizeof(a) / sizeof(a[0]);
	
	for(int i = 0; i < N -1; i++) {
		for(int j = i +1; j < N; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (int i = 0; i<5; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
