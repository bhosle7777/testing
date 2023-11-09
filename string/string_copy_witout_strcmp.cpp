#include <iostream> 
using namespace std;

int main() {

	char source[50], copy[50];
	int i = 0;
	cout<<"Enter string"<<endl;
	cin.getline(source, 49);
	
	while(source[i] != '\0') {
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	cout<<"Copy string : "<<copy<<endl;
}
