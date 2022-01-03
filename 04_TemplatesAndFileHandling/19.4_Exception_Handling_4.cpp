//calling function that generates exception
//throw point outside try block

#include<iostream>
#include<string.h>


using namespace std;

void divide(float x, float y, float z)
{
	if((x-y)==0)
      {
	
          throw(x-y);   //throw point
      }
      
      int d;
       
      
      d = z/(x-y);

      cout<<endl<<"c/(a-b) = "<<d;
}


int main()
{
float a,b,c;


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

catch(float i)    
{
	
cout<<endl<<"Divide by 0 exception because a-b is:"<<i;
}

return 0;
}
