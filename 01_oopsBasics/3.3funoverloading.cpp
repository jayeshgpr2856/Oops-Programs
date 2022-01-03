//function overloading in class
#include <iostream>
using namespace std;
class Addition 
{
public:
    void sum(int num1,int num2) 
	{
		int sum;
        sum=num1+num2;
        cout<<sum<<"\n";
    }
    void sum(int num1,int num2, int num3) 
	{
       int sum;
       sum=num1+num2+num3;
       cout<<sum<<"\n";
    }
};
int main() 
{
    Addition obj;
    obj.sum(20,15);
    obj.sum(10,20,30);
    return 0;
}

