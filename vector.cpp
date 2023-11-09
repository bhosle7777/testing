#include <iostream>
#include <vector>
using namespace std;

int items(vector<int> item){

	int sum = 0;
    cout<<"\n";
    for(int i=0; i< item.size(); i++){
        cout<<item[i]<<"\t";
	sum += item[i];
    }
    	cout<<"\n"<<"Total Amount :- "<<sum<<"\n";
    if(item.size() == 0){
    	cout<<"Please select validate item\n";
    }
    
    return 0;
}

int main() {
    vector<int> item1, item;
    int i;
    
    cout<<"Select items :- ";
    do{
        cin>>i;
        item1.push_back(i);
    }while(i != 0);
     
    for( i =0; i<item1.size(); i++){
        cout<<item1[i]<<"\t";
        switch(item1[i]){
            case 1 :
                item.push_back(100);
                break;
            case 2 :
                item.push_back(200);
                break;
            case 3 :
                item.push_back(300);
                break;
            default :
                break;
        }
    }
        items(item);
}
