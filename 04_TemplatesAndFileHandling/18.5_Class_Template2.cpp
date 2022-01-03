 
// Class template with multiple parameters 

#include<iostream> 
using namespace std; 

template<class T1, class T2> 
class Test 
{ 
		T1 a; 
		T2 b; 
	public: 
		Test(T1 x, T2 y) 
		{ 
			a = x; 
			b = y; 
		} 
		void show() 
		{ 
			cout <<endl<<"a = "<<a<<" "<<"b = "<< b <<endl; 
		} 
}; 


int main() 
{  
	Test <float, int> t1 (1.23, 123); 
	
	
	Test <int, char> t2 (100, 'W'); 
	
	Test <int, string> t3 (999, "INDIA");
	
	t1.show(); 
	t2.show(); 
	t3.show();
	
	return 0; 
} 


