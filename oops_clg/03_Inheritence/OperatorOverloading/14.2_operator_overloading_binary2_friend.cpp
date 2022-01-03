// // overloading binary operator + by friend function


// #include<iostream>
// using namespace std;

// class complex
// {
// 	int a;
// 	int b;
	
// 	public:
// 		complex()
// 		{
// 		  a=b=0;
// 		}
		
// 		void setData(int x, int y)
// 		{
// 			a = x;
// 			b = y;
// 		}
		
		
// 		void showData()
// 		{
// 			cout<<endl<<a<<" + "<<b<<"i"<<endl;
// 		}
		
		
	
// 		friend complex operator+(complex , complex );
// };

// complex operator+(complex M, complex N)
// 		{
// 			complex temp;
			
// 			temp.a = M.a + N.a;
// 			temp.b = M.b + N.b;
			
// 			return(temp);     //return compex(M.a +N.a,M.b +N.b);  returns temporary object, no need of temp
// 		}
  

// int main()
// {
	
// complex c1,c2,c3;

// c1.setData(2,3);

// c2.setData(10,15);

// c1.showData();

// c2.showData();




// //c3 = add(c1,c2);


// //c3 = operator+(c1,c2);

// c3 = c1 + c2;  



// cout<<endl<<"Sum : \n"; 

// c3.showData();


// return 0;

// }
	




#include<iostream>
using namespace std;

class Instrument{
	public:
	void MakeSound(){
		cout << "Instrument Playing...";
	}
};
 
class Accordian :: public Instrument{
	public:
	void MakeSound(){
		cout << "Accordian Playing...";
	}
};
int main()
{
	Instrument * i1 = new Accordian();
	i1->MakeSound;
	return 0;
}