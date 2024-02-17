#include<iostream>
using namespace std;

auto greet = [] (int a, int b){
    cout<<"hello world :"<<endl;

    // cout<<"Sum : "<<a+b;
    return a + b;
};

int main(){

    cout<<greet(2, 3);
}