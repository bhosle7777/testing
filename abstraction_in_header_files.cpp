    #include <iostream>  
    #include<math.h>  // abstraction in header file
    using namespace std;  
    int main()  
    {    
     int n = 4;  
       int power = 3;  
       int result = pow(n,power);         // pow(n,power) is the  power function  
       std::cout << "Cube of n is : " <<result<< std::endl;  
       return 0;  
    }
