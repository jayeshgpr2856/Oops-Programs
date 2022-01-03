//Friend function
//2. Outside function friendly to two classes

#include<iostream>
using namespace std;

class B;  //forward declaration
class A
{
	int a;
	
	public:
		demo()
		{
			a = 0;
		}
		
		void set_data(int p)
		{
			a = p;
		
		}
		
		
		void show_data()
		{
			cout<<endl<<a<<endl;
		}
       
       friend void add(A,B);

};

class B
{
	int b;

	public:
       test()
		{
			b = 0;
		}
		
		void set_data(int q)
		{
			b = q;
		
		}
		
		void show_data()
		{
			cout<<endl<<b<<endl;
		}
       
       friend void add(A,B);

};

	void add(A obja, B objb)
		{
			cout<<endl<<"Sum is "<<obja.a + objb.b<<endl;
			
		}


int main()
{
	
A obj1;

B obj2;

obj1.set_data(10);

obj2.set_data(50);

obj1.show_data();

obj2.show_data();

add(obj1, obj2);

return 0;

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 	
