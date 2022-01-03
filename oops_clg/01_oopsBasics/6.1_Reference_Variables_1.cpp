
#include <iostream>

using namespace std; 


int main()
{
	
	int a = 10;
	
	int & r=a;
	r++;
	cout<<r<<"\n";
	int c = 30;
	r=c;
	cout<<r;
	cout<<a;
	r++;
	cout<<a;
	ostream &output = cout;
	output<<"\nHello World";

	
	
	// int b= 20;
	// int *p= &b; 
	// int& s = *p; //compiler binds reference s to b not to the pointer
	// s++;
	// cout<<"\n"<<b<<"\t"<<s<<"\t"<<*p;
	// *p=12;
	// cout<<"\n"<<s<<"\t"<<b;
	// int d=30;
	// p=&d;    sj
	// cout<<"\n"<<s;
	
	// int e=50;
	//  int *q = &e; 
	// int*& m = q; // pointer reference....reference to pointer
	// cout<<"\n\n"<<*m;

}
