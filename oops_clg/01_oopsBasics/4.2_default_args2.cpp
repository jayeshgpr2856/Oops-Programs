// C++ program to demonstrate use of function with default arguements(with default values at definition).
#include<iostream>
using namespace std;
int sum(int p, int q, int r=5, int s=10)  //default arguments given default values during function defination since there is no prototype
{
	return(p+q+r+s);
}
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


