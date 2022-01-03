//Rethrow Exception

#include<iostream>
#include<string.h>


using namespace std;

void divide(double x, double y, double z)
{
	try
	{
	if((x-y)==0)
      {
	
          throw(x-y);  
      }
    
      int d;
       
      
      d = z/(x-y);

      cout<<endl<<"c/(a-b) = "<<d;
      
    }
    
    catch(double )
    {
    	cout<<endl<<"Inside Function : Exception Caught"<<endl;
    	
    	throw;
    }
}


int main()
{
double a,b,c;


cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
cout<<"Enter the value of c:";
cin>>c;

try
{

divide(a,b,c);

}



catch(double t)    
{
	
cout<<endl<<"Inside Main : Divide by 0 exception  because a-b is:"<<t;


}

return 0;
}
