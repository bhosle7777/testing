
// Implementation of Singleton Class 
// in C++
#include <bits/stdc++.h>
using namespace std;
 
class Singleton{
  private:
	  string name, loves; 
	  static Singleton* instancePtr; 
	  Singleton() 
	  {
 	  }
  public:
	  //Singleton(const Singleton& obj) = delete; 
	  static Singleton* getInstance()
	  {
	    if (instancePtr == NULL) 
	    {
	      instancePtr = new Singleton(); 
	      return instancePtr; 
	    }
	    else
	    {
	      return instancePtr;
	    }
	  }
	 
	  void setValues(string name,  string loves) 
	  {
	    this->name = name;
	    this->loves = loves;
	  }
	   
	  void print() 
	  {
	    cout << name << " Loves " << loves << "." << endl;
	  }
};
 
Singleton* Singleton ::instancePtr = NULL; 
 
int main()
{
  Singleton* GeeksForGeeks = Singleton ::getInstance(); 
   
  GeeksForGeeks->setValues("Manish", "GeeksForGeeks"); 
  GeeksForGeeks ->print(); 
  cout << "Address of GeeksForGeeks: " << GeeksForGeeks << endl;
 
  cout << endl; 
 
  Singleton* gfg = Singleton ::getInstance(); 
  gfg->setValues("Vartika", "GeeksForGeeks"); 
   
  gfg->print(); 
   
  cout << "Address of gfg: " << gfg << endl;
  return 0;
}

