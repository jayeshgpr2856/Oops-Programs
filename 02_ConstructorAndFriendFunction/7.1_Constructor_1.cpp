#include<iostream>
using namespace std;

class point
{
	int x;
	int y;
	
	public:
		
	
	 point()    //default contructor
		{
		 x=0;
		 y=0;
		 
		}
	
	 point(int a, int b)     // parameterized constructor // point(int, int);
	  {
	  	x = a;
	  	y = b;
	  }
		
	  point(point & ref)    // copy constructor
		{
			x = ref.x;
			y = ref.y;
			
	
		}
		
		void getdata()
		{
			cout<<"\nEnter x & y coordinates"<<endl;
	        cin>>x>>y;
		}
		
		void putdata()
		{
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
		
	};
		
	int main()
	{
		
	  point p1;   // default constructor called//implicit calling  // explicit:  point p1 = point(); 
		
	  p1.putdata();
		
	  point p2(10,20);  // parametrized constructor called // point p2 = point(10,20); explicit calling
		
      p2.putdata();
	 	
	  point p3(p2);   // or point p3 = p2; // copy constructor called 
	  
	  p3.putdata();
	

		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
