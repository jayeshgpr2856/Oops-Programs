// overloading unary operator - (unary minus) by member function

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
		
		
	
			

		void operator-()
		{
			
			
			a = -a;
			b = -b;
			
			
		}
  

	
	/*	complex operator-()    // for c2 = -c1;
		{
			
			complex temp;
			
			temp.a = -a;
			
			temp.b = -b;
			
			return(temp);
			
			
		}
	*/
	
  

};

int main()
{
	
complex c1;

c1.setData(2,3);


c1.showData();

-c1; // c1.operator-();




cout<<endl<<"Negation : \n"; 

c1.showData();


//complex c2;

//c2 = -c1;   // c2 = c1.operator-();


//cout<<endl<<"Negation : \n"; 

//c2.showData();


return 0;

}
	
	
