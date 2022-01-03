#include <iostream>
using namespace std;

template <class T>
T getmax(T a , T b)
{
	if(a > b)
	   return(a);
	   
    else
        return(b);
}

int main()
{
    int i1, i2;
	float f1, f2;
	char c1, c2;

	cout << "Enter two integers:\n";
	cin >> i1 >> i2;
	cout << getmax(i1, i2) <<" is larger." << endl;

	cout << "\nEnter two floating-point numbers:\n";
	cin >> f1 >> f2;
	cout << getmax(f1, f2) <<" is larger." << endl;

	cout << "\nEnter two characters:\n";
	cin >> c1 >> c2;
	cout << getmax(c1, c2) << " has larger ASCII value.";


	return 0;
	
}
	
