#include <iostream>

using namespace std;

template <typename t , typename u> 
u firstfun( t x, u y)
{
	return x + y;
}

int main(){
	
	cout<<firstfun<int, float>(3.55, 5.88)<<endl;
}
