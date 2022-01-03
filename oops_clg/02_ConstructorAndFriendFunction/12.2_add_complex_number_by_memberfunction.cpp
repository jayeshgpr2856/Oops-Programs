//Passing & returning objects
//Program to add two complex numbers (without using friend fun & operator overlaoding), simply by member functions.

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
       
       
       complex add(complex);
       
       void diff(complex, complex);

};

	complex complex::add(complex q)  //c2
		{
			complex temp;
			
			temp.a = a + q.a;
			
			temp.b = b + q.b;	
			
			return(temp);
		}

   void complex::diff(complex p, complex q)
		{
			
			
			a = p.a - q.a;
			
			b = p.b - q.b;	
			
			
		}


int main()
{
	
complex c1,c2,c3,c4;

c1.set_data(5,10); // 5  + 10i

c2.set_data(100,50); // 100 + 50i

cout<<endl<<"C1 = ";

c1.show_data();

cout<<endl<<"C2 = ";

c2.show_data();


c3 = c1.add(c2);


c4.diff(c1,c2); //another way
	

cout<<endl<<"Sum = ";

c3.show_data();


cout<<endl<<"Difference = ";

c4.show_data();


return 0;

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 	
