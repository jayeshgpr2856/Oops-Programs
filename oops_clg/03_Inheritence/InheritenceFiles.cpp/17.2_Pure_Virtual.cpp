//pure virtual function
// Shape class is abstract

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
    
    virtual void area() = 0;
   
};
 
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
	
	Shape s;
	
    Shape *sPtr;
    
    Rectangle Rect;
    
    sPtr = &Rect;
 
    sPtr -> set_data (5,3);
    
    sPtr -> area(); 
 
    return 0;
}
    
