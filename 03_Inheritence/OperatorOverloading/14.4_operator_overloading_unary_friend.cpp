// overloading unary operator - (unary minus) by friend function

#include<iostream>
using namespace std;



class complex
{
	int a;
	int b;
	
	public:
		complex()
		{
		  a=b=0;
		}
		
		void setData(int x, int y)
		{
			a = x;
			b = y;
		}
		
		
		void showData()
		{
			cout<<endl<<"a = "<<a<<"  b = "<<b<<endl;
		}
		
		
	friend void operator-( complex &);        // for   -c1;
	
	 //friend complex operator-(complex  );  // for c2 = -c1;
	
};

		
			

		void operator-(  complex & c)  //so that changes are reflected in object passed
		{
			
			
			c.a = -c.a;
			c.b = -c.b;
			
			
		}
  

	
	/*	complex operator-(complex c)
		{
			
			complex temp;
			
			temp.a = -c.a;
			
			temp.b = -c.b;
			
			return(temp);
			
			
		}
	*/
	
  



int main()
{
	
complex c1;

c1.setData(2,3);


c1.showData();

-c1; // operator-(c1);


cout<<endl<<"Negation : \n"; 

c1.showData();


//complex c2;

//c2 = -c1;   // c2 = operator-(c1);


//cout<<endl<<"Negation : \n"; 

//c2.showData();


return 0;

}
	
