//C++ Program to demonstrate use of inline functions

#include <iostream> 
using namespace std; 
inline int cube(int a) 
{ 
return(a*a*a); 
} 
inline int square(int b) 
{ 
return(b*b); 
}
int main() 
{ 
int a =5, b=10;
cout << "The cube of "<<a<<" is: "<< cube(a)<<"\n"; 
cout << "The square "<<b<<" is: "<< square(b)<<"\n"; 
return 0; 
}  
