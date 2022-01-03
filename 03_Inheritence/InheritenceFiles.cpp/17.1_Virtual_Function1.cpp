#include <iostream>
using namespace std;
 
class Shape
{
  protected:
  	
    double width, height;
    
  public:
  	
    void set_data (double a, double b)
    {
        width = a;
        height = b;
    }
    
    virtual void area();
};
 
 
 void  Shape::area()
    {
    	
	cout<<endl<<"Area Function of Base"<<endl;

	
	}
 
class Rectangle: public Shape
{
  public:
  	
   void area()
    {
        cout<<endl<<"Area = "<<width*height<<endl;
    }
    
    

};
 
int main ()
{
    Shape *sPtr;
    
    Rectangle Rect;
    
    sPtr = &Rect;
 
    sPtr -> set_data (5,3);
    
    sPtr -> area(); 
 
    return 0;
}
    
