#include<iostream>
using namespace std;

class parent
{
	int x;
	
    
   public:
  parent()
    {
    	cout<<endl<<"Parent class Default Constructor\n";
    	x = 0;
    }
    
   parent(int a)
    {
        cout<<endl<<"Parent class Parametrized Constructor\n";
        
        x = a;
    }
    
    
    ~parent()
    {
        cout<<endl<<"Parent class Destructor\n";
    }
    
    void show_parent()
    {
    
    cout<<endl<<"x = "<<x<<endl;
    }
    
};

class child : public parent
{

     int y;

    public:
    	
	 child() 
    {
        cout<<"Child class Default Constructor\n";
        
        y = 10;
        
        
    }
    
   child(int p):parent(p)
    {
  
       cout<<endl<<"Child class Parameterized Constructor\n";
       
       y = p;
    
    }
    

    ~ child() 
    {
        cout<<endl<<"Child class Destructor\n";
    }
    
    void show_child()
    {
    	cout<<endl<<"y = "<<y<<endl;
    }
};

int main()
{

    child c1(15);  
    
    c1.show_parent();
    
    c1.show_child();
    
  
  
    
    
    return 0;
}
