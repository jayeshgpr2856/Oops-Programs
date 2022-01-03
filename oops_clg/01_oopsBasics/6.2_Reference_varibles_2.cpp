//Program to demonstrate call by value, call by address and call by reference
#include <iostream>
using namespace std;

void swap(int,int);	//pass by value
void swap(int *,int *);	//pass by address
void Swap(int &,int &);	// pass by reference

int main () 
{
  cout<<".....call by value......\n\n";
  int a, b;
  cout<<"Enter first number"<<endl;
  cin>>a;
  cout<<"Enter another number"<<endl;
  cin>>b;
  cout<<endl;
  
  cout << "Before swap, value of a :" << a << endl;
  cout << "Before swap, value of b :" << b << endl;
  
  swap(a, b);

  cout << "After swap, value of a :" << a << endl;
  cout << "After swap, value of b :" << b << endl;
   
  cout<<"\n.....call by address......\n\n";
  int m, n;
  cout<<"Enter first number"<<endl;
  cin>>m;
  cout<<"Enter another number"<<endl;
  cin>>n;
  cout<<endl;
  
  cout << "Before swap, value of a :" << m << endl;
  cout << "Before swap, value of b :" << n << endl;
  swap(&m,&n);

  cout << "After swap, value of a :" << m << endl;
  cout << "After swap, value of b :" << n << endl;
   
  cout<<"\n.....call by reference......\n\n";
  int p, q;
  cout<<"Enter first number"<<endl;
  cin>>p;
  cout<<"Enter another number"<<endl;
  cin>>q;
  cout<<endl;
  
  cout << "Before swap, value of a :" << p << endl;
  cout << "Before swap, value of b :" << q << endl;
  Swap(p,q);

  cout << "After swap, value of a :" << p << endl;
  cout << "After swap, value of b :" << q << endl;
 
 
 return 0;
}

void swap(int x, int y) // function definition to swap the values using call by value
{
   int temp;
   temp = x; 
   x = y; 
   y = temp; 
  
   return;
}

void swap(int *x, int *y) // function definition to swap the values using call by adress
{
   int temp;
   temp = *x; 
   *x = *y; 
   *y = temp;
  
   return;
}

void Swap(int &x, int &y) // function definition to swap the values using call by reference
{
   int temp;
   temp = x; 
   x = y; 
   y = temp;
  
   return;
}
