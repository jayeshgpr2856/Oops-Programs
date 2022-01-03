//Program to demonstrate return by reference
#include <iostream>
#include <ctime>
using namespace std;
int & max(int &, int &);
int main () 
{
int a,b;
cout<<"Enter two numbers <a,b>\n";
cin>>a>>b;
max(a,b)= -1;
cout<<"\n....The value of a and b after function call.....\n";
cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl;
}
int & max(int & p, int & q)
{
	if(p>q)
	return p;
	else
	return q;
}

