
//Define multiple catch statement in c++ 
// ellipsis ...
// catch all   catch(...)

 
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
       
    catch(...)                       //should be placed at last
    {
        cout<<"Exception Caught"<<endl;
    }       
     
    return 0;
}
