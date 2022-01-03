//basic c++ program class and object.
#include<iostream>
using namespace std;
class item
{
    private:
		int number;
		float cost;
	public:
	void getdata(int, float);
	void putdata()
	{
		cout<<"Item Number is: "<<number<<"\n";
		cout<<"cost is: "<<cost<<"\n";
	}
};
void item::getdata(int a, float b)
{
	number=a;
	cost=b;
}
int main()
{
	item x,y,z;
	

	x.getdata(100,250.50);
	x.putdata();
	y.getdata(101,300);	
	y.putdata();
	z=y;
	z.putdata();
	

}
	
inheritence
virtual / friend / overloading
file handling
c=a/b;
inf --> in devc