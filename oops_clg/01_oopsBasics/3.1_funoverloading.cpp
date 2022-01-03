//C++ program to find area of square,rectangle,circle and triangle by using function overloading
#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
	int s;
	cout<<"Enter side of a square:\n";
	cin>>s;
	cout<<"Area of square is: "<<area(s);
	int l,b;
	cout<<"\n\nEnter length and breadth of rectangle:\n";
	cin>>l>>b;
	cout<<"Area of rectangle is:" <<area(l,b);
	float r;
	cout<<"\n\nEnter radius of circle:\n";
	cin>>r;
	cout<<"Area of circle is: "<<area(r);
	float bs,ht;
	cout<<"\n\nEnter base and height of triangle:\n";
	cin>>bs>>ht;
    cout<<"Area of triangle is: "<<area(bs,ht);
}
int area(int S)
{
    return(S*S);
}
int area(int L,int B)
{
    return(L*B);
}
float area(float R)
{
    return(3.14*R*R);
}
float area(float BS,float HT)
{
   return((BS*HT)/2);
}
