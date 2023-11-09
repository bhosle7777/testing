#include <bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std; 

int main() 
{
	string str = "demo string string";
		
	map<char, int> m;
	
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] != ' '){
			m[str[i]]++;
		}
		i++;
	}
	
	map<char, int>::iterator it;
	
	for(it = m.begin(); it != m.end(); it++){
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	
	cout<<str;
	return 0; 

} 

