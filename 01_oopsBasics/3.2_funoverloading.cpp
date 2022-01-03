
//function overloading rule 1, 2
#include<iostream>
using namespace std;
void f1(int);
void f1(float);

int main()
{
	char k='A';
	f1(k);
		
	//double m = 5.4;
	//f1(m);
	//f1(5.4); generates error due to amgiguity so use 5.4f which will be treated as float
	return 0;
}

void f1(int a)
{
	cout<<a<<"\n";
}

void f1(float b)
{
	cout<<b<<"\n";
}	
