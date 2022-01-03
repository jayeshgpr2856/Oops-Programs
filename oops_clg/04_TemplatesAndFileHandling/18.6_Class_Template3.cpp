
#include <iostream>
using namespace std;

template <class T> 

class Example
{
  T pair[2]; 
  public:
    Example (T , T);
    
    void display()    
    {
      cout << "value 1 is: " << pair[0] <<endl;
      cout<< "value 2 is: " << pair[1] <<endl;
    }
};

template <class T>                  //Member Function Templates
Example<T>::Example (T one, T two) 
    {
      pair[0]= one;     
      pair[1]= two;
    }

int main() {
  Example<int> ex(4,5); 
  
  ex.display();
  
  Example<string> ex2("Rajasthan","Jaipur"); 
   
  ex2.display();
  
  return 0;
}
