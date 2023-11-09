#include<iostream>
using namespace std;

class demo{
	public:
		demo(){
		}
		int a, b;
		void get_data(int x = 0, int y = 0){
			a = x;
			b = y;
		}
		
		demo operator+ (const demo &obj){
			demo res;
			res.a = this->a + obj.a;
			res.b = this->a + obj.b;				
			return res;
		}
};

int main(){
	demo d1, d2;
	 d1.get_data(4, 5);
	 d2.get_data(5,6);
	
	demo d3 = d1 + d2;
	
	cout<<" Operator Overloading : "<<d3.a<<"\t"<<d3.b;
}
