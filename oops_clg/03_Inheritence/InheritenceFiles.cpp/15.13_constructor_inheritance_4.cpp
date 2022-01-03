// C++ program to show the order of constructor calls 
// in Multiple Inheritance 

#include <iostream> 
using namespace std; 


class Parent1 
{ 
	
	public: 
	
		 
	Parent1() 
	{ 
		cout<<endl<<"Parent1  Default Constructor\n";
	} 
	
	~Parent1()
    {
        cout<<endl<<"Parent1  Destructor\n";
    }
}; 


class Parent2 
{ 
	public: 
	

	Parent2() 
	{ 
		cout<<endl<<"Parent2  Default Constructor\n";
	} 
	
	~Parent2()
    {
        cout<<endl<<"Parent2  Destructor\n";
    }
}; 

class Child : public Parent2, public Parent1 
{ 
	public: 
	

	Child() 
	{ 
		cout<<endl<<"Child  Default Constructor\n"; 
	} 
	
	 ~ Child() 
    {
        cout<<endl<<"Child class Destructor\n";
    }
    
}; 


int main() { 
	

	Child obj1; 
	return 0; 
} 

