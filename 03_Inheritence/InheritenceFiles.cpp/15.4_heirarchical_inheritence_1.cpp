#include <iostream>
 
using namespace std;


class Shape 
{
   protected:         
   
      int width;
      int height;
      
   public:
      void get_data() 
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
   	
      void find_area() 
	  { 
	     area = width*height;
         cout<<"Area = "<<area<<"\n"; 
      }
};


class Triangle: public Shape 
{
	private:
		
		int area;
		
		
   public:
   	
      void find_area() 
	  { 
	     area = (width*height)/2;
         cout<<"Area = "<<area<<"\n"; 
      }
};

int main() 
{
   Rectangle r;
   
   Triangle t;
   
   cout<<"...Rectangle...\n\n";
   
   r.get_data();
   
   r.find_area();
   
   cout<<"\n...Triangle...\n\n";
   
   t.get_data();
   
   t.find_area();

   return 0;
}
