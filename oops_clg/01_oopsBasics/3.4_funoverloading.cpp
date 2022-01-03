//function overloading rule no. 3
#include<iostream>
using namespace std;
void f1(char);
void f1(char , char);
void f1(int , int); 
int main()
{
	int k= 65;  //  appply rule 3
	f1(k);
	
	f1(65,'M'); // rule 2 applied
	
	
	f1(5.0, 6.5); // rule 3 causes ambiguity
	
	return 0;
}

void f1(char a)
{
	cout<<a<<"\n";
}

void f1(char x, char y)
{
	cout<<x<<"\t"<<y<<"\n";
}
void f1(float x, float y)
{
	cout<<x<<"\t"<<y<<"\n";
}

void f1(int x, int y)
{
	cout<<x<<"\t"<<y<<"\n";
}
