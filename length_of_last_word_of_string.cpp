#include <iostream>
#include <string>
using namespace std;
 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int length(char b[])
{
	int count = 0;
	int len;
	int i =0;
	while(b[i] != '\0'){
		len++;
		i++;
	}
    for (int i = len - 1; i >= 0; i--) {
       if(b[i] != ' ')
       		count++;
       	else
       		break;
    }
    return count;
}
 
// Driver code
int main()
{
    char a[50] = "Geeks for Geeksfor demo";
    cout << "The length of last word is " << length(a);
    return 0;
}
