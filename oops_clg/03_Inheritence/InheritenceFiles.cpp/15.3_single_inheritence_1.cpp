
// single Inheritence
//Find area of rectangle using single inheritence
// Assignment : Add two numbers using single inheritence
#include <iostream>
 
using namespace std;


class Shape 
{
   protected:         //if private then width and height are inheritable but inaccessible in derived class// inaccessible outside class// accessible to member functions
                     //protected members are inhertiable and accessible in immediate derived class //  inaccessible outside class// accessible to member functions
   	                // public members are inhertiable and accessible in derived class //  accessible outside class// accessible to member functions
      int width;
      int height;
      
   public:
      void getdimension() 
	  {
         cout<<"Enter width and height\n";
	     cin>>width;
	     cin>>height;
	 }
      
  
};


class Rectangle: public Shape 
{
	private:
		
		int area;
		
   public:
   	
      void findArea() 
	  { 
	     area = width*height;
         cout<<"Area = "<<area; 
      }
};

int main() 
{
   Rectangle r;
   
   r.getdimension();

   r.findArea();

   return 0;
}
