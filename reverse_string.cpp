#include<iostream> 
using namespace std;
int main(){
	char a[50] = "First program of cpp";
	int i = 0, count = 0;
	while(a[i] != '\0'){
		count++;
		i++;
	}
	cout<<"Count : "<<count<<endl;
	int rcount = count;
	i = 0;
	char b[50];
	while(count != 0){
		count--;
		b[i] = a[count];
		i++;
	}
	
	i = 0;
	while(b[i] != '\0'){
		cout<<b[i];
		i++;
	}
	cout<<endl;
	char rstr[50];
	int cnt = 0, last = 0;
	int l, m;
	for(l = 0; rcount != 0; l++){
		rcount--;
		if(b[l] == ' ' || b[l] == '\0'){
			
			for(m = l; m >= last; m--){				
				rstr[cnt] = b[m];
				cnt++;
			}
			last = l;
		}	
	}
	
	--l;
	for(int m = l; m >= last; m--){				
		rstr[cnt] = b[m];
		cnt++;
	}
	i = 0;
	while(rstr[i] != '\0'){
		cout<<rstr[i];
		i++;
	}
	cout<<endl;
}
