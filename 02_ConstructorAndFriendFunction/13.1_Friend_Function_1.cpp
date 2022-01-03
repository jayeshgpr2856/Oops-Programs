//Friend function
//1. Outside function friendly to class// program to add private data of a class(object)

#include<iostream>
using namespace std;

class demo
{
	int x,y;

	public:
		
	demo()    
		{
		 
		 x = y= 0;	
		} 

		void setdata(int a, int b)
		{
			
			x = a;
			y = b;
			
		}
		
		
		void showdata()
		{
			cout<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl;
		
		}
		
		friend demo add(demo);
		
	};
	
		demo add(demo t)         
		{
			
			demo temp;
			
			temp.x = t.x + t.y;
			
			return(temp);
		}

	
	int main()
	{
		
		demo d,d1;   
		
		
	    d.setdata(5,10);
	    
	    d.showdata();
	    
	    d1 = add(d);
	    
	    d1.showdata();
	    
		return 0;
	}
	
	
	
