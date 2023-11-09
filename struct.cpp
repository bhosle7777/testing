#include<iostream>

using namespace std;

struct rectangle
{
	int height;
	int width;
};

int main(){
	
	struct rectangle rec;
	rec.width = 6;
	rec.height = 4;
	
	cout<<"Area of rectangle :"<<(rec.width * rec.height)<<endl;
}
