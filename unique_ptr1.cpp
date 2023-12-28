#include<iostream>
#include<memory>
using namespace std;

class rectangle{
	private:
		int ln;
		int br;
	public:
		rectangle(int a, int b){
			ln = a;
			br = b; 
		}
		int show(){
			return ln * br;
		}	
};

int main(){

//	rectangle *r = new rectangle(4, 5);
//	cout<<r->show();	
	
	unique_ptr<rectangle> p(new rectangle(4,5));
	
	cout<<p->show();
	
	unique_ptr<rectangle> p1;
	
	p1 = move(p);

}
