// overloading binary operator +

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
			cout<<endl<<a<<" + "<<b<<"i"<<endl;
		}
		
		
	/*	complex add(complex c)
		{
			complex temp;
			
			temp.a = a + c.a;
			temp.b = b + c.b;
			
			return(temp);
		}*/
			

		complex operator+(complex c)
		{
			complex temp;
			
			temp.a = a + c.a;
			temp.b = b + c.b;
			
			return(temp);
		}
};

int main()
{
	
complex c1,c2,c3;

c1.setData(2,3);

c2.setData(10,15);


c1.showData();

c2.showData();

//c3 = c1.add(c2);   // no operator overloading, c3 = c1 + c2  will give error

c3 = c1 + c2; //c3 = c1.operator+(c2);

cout<<endl<<"Sum : \n"; 

c3.showData();

//c3 = 2 + c2   // invalid, use friend function

//c4 = c1 + c2 +c3;  // c4 = c1.operator+(c2).operator+(c3);   //chaining, return type must not be void but class type.

return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 	
