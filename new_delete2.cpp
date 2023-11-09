#include <iostream>
 using namespace std;
 
 int main(){
 
 	/*int size;
 	int *arr = new int[size];
 	
 	cout<<"Enter array size:  ";
 	cin>>size;
 	
 	cout<<"Enter array element:  " ;
 	for(int i=0; i<size; i++)
 	{
 		cin>>arr[i];
 	}
 	
 	cout<<"Array elements: ";
 	for(int i=0; i<size; i++){
 		cout<<arr[i]<<"\t";
 	}
 	
 	delete arr;
 	return 0; */
 	
 	int size = 3;
 	int *arr, arrr[size];
 	
 	arr = arrr;
 	
 	cout<<"Enetr Array element: ";
 	for(int i = 0; i<size; i++)
 	{
 		cin>>arr[i];
 	}
 	
 	cout<<"Array Elements:  ";
 	for (int i=0; i<size; i++)
 	{
 		cout<<arr[i]<<", ";
 	}
 	return 0;
 }
