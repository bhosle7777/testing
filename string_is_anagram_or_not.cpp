#include <bits/stdc++.h>
using namespace std; 

int main() 
{
	char a[50] = "same string";
	char b[50] = "string same r";
	
	int i = 0, j, tempa, tempb, tempr;
	int counta = 0, countb = 0;

	while(a[i] != '\0'){
		counta++;
		i++;
	}
	
	i = 0;
	while(b[i] != '\0'){
		countb++;
		i++;
	}
	
/*	for(i = 0; i<counta; i++){
		tempr = a[i];	
		a[i] = a[counta];
		a[counta] = tempr;
	}*/
	
	cout<<"Count a : "<<counta<<endl;
	cout<<"Count b : "<<countb<<endl;
	if(counta != countb){
		cout<<"String are not anagram"<<endl;
		return 0;
	}
	
	
	//sort two string////////////////////////////
	for(i = 0; i <= counta; i++){
		for(j = i; j <= counta; j++){
			if(a[i] < a[j]){
				tempa = a[j];
				a[j] = a[i];
				a[i] = tempa;
			}
			if(b[i] < b[j]){
				tempb = b[j];
				b[j] = b[i];
				b[i] = tempb;
			}
		}
	}
	
	for(i = 0; i<=counta; i++){
		if(a[i] != b[i]){
			cout<<"String are not anagram :"<<endl;
		}
		else if (i == counta){
			cout<<"String are anagram : "<<endl;
		}
	}
	
	for(i = 0; i <= counta; i++){
		cout<<a[i];
	}
	cout<<endl;
	for(i = 0; i <= counta; i++){
		cout<<b[i];
	}
	
	return 0; 

} 

