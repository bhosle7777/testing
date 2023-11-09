#include <iostream>
using namespace std;

int main() {
    
    int count = 0;
    char no[3];
    
    for(int i = 0; i<= 999; i++){
    	sprintf(no, "%d", i);
    	int j = 0;
    	while(no[j] != '\0'){
    		if(no[j] == '9')
    			count++;
    		j++;
    	}
    }
    
    cout<<"Count : "<<count;
}
