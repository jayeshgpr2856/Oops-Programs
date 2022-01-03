#include<iostream>
#include<string.h>

using namespace std;

int main()
{
float a,b,c;
float d;

cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
cout<<"Enter the value of c:";
cin>>c;

try
{
if((a-b)==0)
{
	
throw(a-b);
//throw ("Division by zero exception"); or throw string("Division by zero exception");

}

d = c/(a-b);

cout<<endl<<"c/(a-b) = "<<d;
}
    
catch(float i)    // catch(char * s); or catch(string s);
{
	
cout<<"Divide by 0 exception because a-b is:"<<i;
//cout<<s;

}
cout << "hello";
return 0;
}
