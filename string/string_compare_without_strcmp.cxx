
#include <iostream>
using namespace std;

int str(char string1[50], char string2[50]){
     int i = 0;
     int length1 = 0, length2 = 0;
     while(string1[i] != '\0'){
     	length1++;
     	i++;
     }
     i = 0;
     while(string2[i] != '\0'){
     	length2++;
     	i++;
     }
     i= 0;
	if(length1 == length2){
	     while(string1[i] != '\0' || string2[i] != '\0'){
		    if(string1[i] != string2[i])
			return 1;
			i++;
	    }
	}
	else
		return 1;
		
	return 0;
}

int main() {
    char string1[50], string2[50];
   int ret;
    cout<<"Enter string 1: ";
    cin.getline(string1, 49);
    
    cout<<"Enter string 2: ";
    cin.getline(string2, 49);
    
    cout<<string1<<endl;
    cout<<string2<<endl;
    
   ret = str(string1, string2);
   
   if(ret == 1)
   	cout<<"string are not same";
   else
   	cout<<"String are same";
}
