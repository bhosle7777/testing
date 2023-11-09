#include <iostream>
using namespace std;

int main() {
	char string1[50], string2[50], res[100];
	int i = 0, j = 0, length = 0;
	cout<<"Enter String 1: ";
	cin.getline(string1, 49);
	
	cout<<"Enter String 2: ";
	cin.getline(string2, 49);
	
	while(string1[i] != '\0') {
		length++;
		i++;
	}
	cout<<" length of string 1:"<<length<<endl;

	i = 0;
	while(string1[i] != '\0') {
		res[i] = string1[i];
		i++;
	}
	res[i] = ' ';
	i++;
	while(string2[j] != '\0') {
		res[i] = string2[j];
		j++;
		i++;
	}
	
	res[i] = '\0';
	cout<<res<<endl;
}
