#include <iostream>
using namespace std;

class Mathematics 
{
  int x, y,sum;

public:
	
  void input() 
  {
    cout<<"Input two integers\n";
    cin>>x>>y;
  }

  void add()
  {
   	sum=x+y;
  } 
   void display()
  {
   	cout<<x<<" + "<<y<<" = "<<sum;
  }

};

int main()
{
   Mathematics m;// Creating an object of the class

   //m.input();
   m.add();
   m.display();

   return 0;
}
