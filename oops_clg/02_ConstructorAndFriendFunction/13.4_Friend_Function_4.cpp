//Friend function
//3. Member function of a class friendly to another class

#include<iostream>
 
using namespace std;
 
class B;    //forward declartion

class A
{
   int a;
   
   public:
     
      void get_data();
      
      void put_data();
      
      void sum(B);
       
       
       
};

class B
{
   int b;
   
   public:
     
      void get_data();
      
      void put_data();
      
      friend void A::sum(B);
};


void A::get_data() 
{
 cout<<endl<<"Enter a number"<<endl;
 cin>>a;
}

void A::put_data() 
{
 cout<<endl<<"a = "<<a<<endl;
}


void B::get_data() 
{
 cout<<endl<<"Enter a number"<<endl;
 cin>>b;
}

void B::put_data() 
{
 cout<<endl<<"b = "<<b<<endl;
}

void A::sum(B objb)
{
	cout<<endl<<"a + b = "<<a + objb.b;
}
 

int main()
{
   A obj1;
   
   B obj2;
 

   obj1.get_data();
   
   obj2.get_data();
   
   obj1.put_data();
   
   obj2.put_data();
   
   obj1.sum(obj2);
   
 
   return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 	
