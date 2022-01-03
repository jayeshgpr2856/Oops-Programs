//Friend function
//2. Outside function friendly to class, Adding two complex numbers by friend function concept

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
		
		void set_data(int x, int y)
		{
			a = x;
			b = y;
		}
		
		
		void show_data()
		{
			cout<<a<<" + "<<b<<"i"<<endl;
		}
       
       
       friend complex add(complex, complex);

};

	complex add(complex p, complex q)
		{
			complex temp;
			
			temp.a = p.a + q.a;
			
			temp.b = p.b + q.b;	
			
			return(temp);
		}

  
int main()
{
	
complex c1,c2,c3;

c1.set_data(5,10);   

c2.set_data(100,50);   

cout<<endl<<"C1 = ";

c1.show_data();

cout<<endl<<"C2 = ";

c2.show_data();

 
c3 = add(c1, c2);

//c3 = c1 + c2;  another way by operator overloading , but here it gives error

cout<<endl<<"Sum = ";

c3.show_data();



return 0;

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 	
