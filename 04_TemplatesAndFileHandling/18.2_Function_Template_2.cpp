#include <iostream>
using namespace std;

template <class T>
T add(T a , T b)
{ 
   T ans;
   
   ans = a + b;
   
   return(ans);
 
}

int main()
{
    int i1, i2;
	float f1, f2;
	

	cout << "Enter two integers:\n";
	cin >> i1 >> i2;
	cout <<"sum = "<< add(i1, i2)<< endl;

	cout << "\nEnter two floating-point numbers:\n";
	cin >> f1 >> f2;
	cout <<"sum = "<<add(f1, f2) <<endl;

	return 0;
	
}
	
