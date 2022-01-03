
//Define multiple catch statement in c++ - 

 
#include <iostream>
 
using namespace std;
 
int main()
{
    int choice;
     
    try
    {
        cout<<"Enter any choice: "; 
        cin>>choice; 
         
        if(choice == 0)         
		   cout<<"Hello Everyone!"<<endl;
        else if(choice == 1)    
		       throw (100);    //throw integer value
        else if(choice == 2)    
             throw ('x');    //throw character value
        else if(choice == 3)    
             throw (1.23);  //throw double value
        else    
             cout<<"Bye Bye !!!"<<endl;
    }
    catch(int a)
    {
        cout<<"Integer Exception Caught, value is: "<<a<<endl;
    }
    catch(char b)
    {
        cout<<"Character Exception Caught, value is: "<<b<<endl;
    }   
    catch(double c)
    {
        cout<<"Double Exception Caught, value is: "<<c<<endl;
    }       
     
    return 0;
}
