#include<iostream>

using namespace std;

struct rectangle{

	int width, height;
	rectangle(int w, int h){
		width = w;
		height = h;
	}
	
	void displayarea(){
		cout<<"Area of rectangle constructor and method :"<<(width * height)<<endl;
	}
};

int main() {

	struct rectangle rec = rectangle(6, 8);
	rec.displayarea();
}
