#include<iostream>
using namespace std;

class point
{
	int x;
	int y;
	
	public:
		
		
		point()    //default constructor
		{
		 
		 x = 0;
	     y = 0;
	     
	     cout<<"\nInside Constructor\n";
	     	
		}
	
    
	
	~point()
	{
		
		cout<<"\nInside Destructor\n";
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
	
	void create();
	int main()
	{
		
		point p1;            // C  C  C  C   C D  C D  C D  D D  D  D
		
		point p2,p3,p4;     
		
		{
			point p5;        
		}
		
    create();
    create();
		return 0;
	}
	
	void create()
	{
		point p;
	}
	
	
	
	
	


	
	
	
	
	
