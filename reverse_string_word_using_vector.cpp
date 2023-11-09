#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string s = "i like this program very much"; 

	vector<string> v;
	
	int i, count;
	i = 0; count = 0;
	
	while(s[i] != '\0'){
		count++;	
		i++;
	}
	string a = "";
	for(i = 0; i < count; i++){
		
		if(s[i] == ' '){
			v.push_back(a);
			a = "";	
		}
		a += s[i];
	}
	
	v.push_back(a);
	
	i = 0;
	for(i = v.size(); i != 0; i--){
		cout<<v[i];
	}
	cout<<v[0];

	return 0; 
}

