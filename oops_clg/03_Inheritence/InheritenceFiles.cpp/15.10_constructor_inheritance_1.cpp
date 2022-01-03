#include<iostream>
using namespace std;

class parent
{

	
   
    protected:
		
   	int x;
   	
   	public:
   		
  parent()          //not mandatory to have this constructor
    {
        cout<<"Parent class Default Constructor\n";
        
        x = 2;
    }
    
 
    ~parent()
    {
        cout<<"Parent class Destructor\n";
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
    	
    child()                                      //not mandatory to have this constructor
    {
        cout<<"Child class Default Constructor\n";
        
        y = 0;
    }
    
   

    ~ child() 
    {
        cout<<"Child class Destructor\n";
    }
    
   
    void show_child()
    {
    	cout<<"y = "<<y<<endl<<x;
    }
};

int main()
{

    child c1;
    
    
    cout<<endl<<endl;
    
    
    c1.show_parent();
    
    c1.show_child();
    
  
   
   
    
    
    
    
    return 0;
}
