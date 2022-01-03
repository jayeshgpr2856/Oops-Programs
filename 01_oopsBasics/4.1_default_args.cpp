// C++ program to demonstrate use of function with default arguements...
#include<iostream>
using namespace std;
int sum(int, int, int a=5, int b=10);
//int sum(int, int, int =5, int =10);
int main()
{
	int ans;
	ans=sum(1,2);
	cout<<"The sum is: "<<ans<<"\n";
	ans=sum(1,2,3);
	cout<<"The sum is: "<<ans<<"\n";
	ans=sum(1,2,3,4);
	cout<<"The sum is: "<<ans<<"\n";
	return 0;
}

int sum(int p, int q, int r, int s)
{
	return(p+q+r+s);
}
