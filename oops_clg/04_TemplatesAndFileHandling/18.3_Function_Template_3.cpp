//Function Templates with multiple parameters


#include <iostream>
using namespace std;

template <class T1, class T2>
void show(T1 a , T2 b)
{ 
  
  cout<<"Data1 = "<<a<<" "<<"Data2 = "<<b<<endl;
 
}

int main()
{
 

	cout <<"one integer and one float:\n";
    show(85,90.59);

	cout << "\nOne character and one integer:\n";
	show('A', 1000);

	cout << "\nOne integer and one string:\n";
	show(999, "Jaipur");
	
	return 0;

}
	
