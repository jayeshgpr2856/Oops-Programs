#include<iostream>

using namespace std;
 
class Parent1
{
private:
 
int a;
int aa;
 
public:
 
Parent1()
{
	
a=0;
aa=0;

cout<<endl<<"Parent1 initialized"<<endl;

}
 
Parent1(int m, int n): a(m), aa(n)
{
	


cout<<endl<<"Parent1 initialized"<<endl;

}
 
void ShowParent1()
{
	
cout<<endl<<"a= "<<a<<endl;
cout<<endl<<"aa= "<<aa<<endl;

}

};
 
class Parent2
{
private:
 
int b;
int bb;
 
public:
 
Parent2()
{
	
b=0;

bb=0;

cout<<endl<<"Parent2 initialized"<<endl;

}

Parent2(int e, int f)
{
	
b=e;

bb =f;

cout<<endl<<"Parent2 initialized"<<endl;

}
 
void ShowParent2 ()
{
cout<<endl<<"b= "<<b<<endl;

cout<<endl<<"bb= "<<bb<<endl;

}

};
 
class Child: public Parent2, public Parent1
{
private:
 
int c,d;
 
public:
 
Child()
{
	
c=0;

cout<<endl<<"Child initialized"<<endl;

}
 
/*Child(int w, int x, int y, int z) : Parent1(y,y), Parent2(z,z)
{

c=w;

d=x;

cout<<endl<<"Child initialized"<<endl;

}*/


Child(int x, int y) : Parent1(x,y), Parent2(x,y) , c(x), d(y)
{

cout<<endl<<"Child initialized"<<endl;

// c = x;
// d = y;

}

 
void ShowChild()
{
	


ShowParent2();

ShowParent1();

cout<<endl<<"c= "<<c<<" d= "<<d<<endl;

}

};
 
main()
{
	
// Child obj(1,2,3,4);

 Child obj(5,6);


obj.ShowChild();

cout<<endl<<endl;

Child obj2;

obj2.ShowChild();

}
