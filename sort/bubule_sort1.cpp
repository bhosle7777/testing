#include<iostream>

using namespace std;

int main(){
	int b[5] = {2,5,1,6,7};
	
	int N = sizeof(b) / sizeof(b[0]);
	cout<<"Array :";
	/* for(int i=0; i<5;i++){
		
		//cout<<b[i]<<"\t";
		if(b[i] < *(b + (i + 1))){
			int temp = b[i];
			    b[i] = *(b + (i + 1));
			    *(b + (i + 1)) = temp;
		}
		cout<<b[i]<<"\t";
	} */
	
	for(int i = 0; i < N;i++){

		for(int j = 0 ; j <  N; j++){
			if(b[i] > b[j]){
				int temp = b[i];
				    b[i] = b[j];
				    b[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < 5 ; i++){
		cout<<b[i] << "\t";
	}

	cout<<endl;
}
