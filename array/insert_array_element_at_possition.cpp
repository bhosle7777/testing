    #include<iostream>  
    using namespace std;    
    int main()  
    {  
	int ele = 0, pos = 0, length = 0, N = 0;

	cout<<"Enter Array Length :";
	cin>>length;
	int a[length];
	
	cout<<"Enter Array element :"<<endl;	
	for(int  i = 0; i < length; i++)
		cin>>a[i];
		
	cout<<"Enter Possition you want to enter array :";
	cin>>pos;
	
	cout<<"\n"<<"Enter the element you want to insert:";
	cin>>ele;


	N = sizeof(a)/sizeof(a[0]);

	for(int i = 0 ; i < N; i++)
		cout<<a[i]<<"\t";
	
	if(N > pos) {
		cout<<"\n";
		N++;
		for(int i = N ; i >= pos; i--) 
			a[i] = a[i - 1];       		
	
		cout<<"\n";
		a[pos - 1] = ele;
		for(int i = 0 ; i < N; i++) 
			cout<<a[i]<<"\t";
	
	}
	else
		cout<<"\n"<<"ERROR : You enter possition is greater than array length"<<endl;
	
    }  
