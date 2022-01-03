
//Friend Class


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
      
      void sub(B);
      
      void mult(B);
       
       
       
};

class B
{
   int b;
   
   public:
     
      void get_data();
      
      void put_data();
      
      /*
	  friend void A::sum(B);
      
      friend void A::sub(B);
      
      friend void A::mult(B); */
      
      friend class A;
      
    
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
 
void A::sub(B objb)
{
	cout<<endl<<"a - b = "<<a - objb.b;
}
 
void A::mult(B objb)
{
	cout<<endl<<"a x b = "<<a * objb.b;
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
   
   obj1.sub(obj2);
   
   obj1.mult(obj2);
   
 
   return 0;
}

	
	
	
	
	
	
	
	
	
	
 	
