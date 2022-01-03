//Inline function and classes :Making member functions inline
#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
	void getdata();
	void putdata()   //inline by default
	{
	cout<<"\nName: "<<name<<"\nAge: "<<age;	
	}
	
};
inline void person::getdata()   //made inline explicitly
{
	cout<<"Enter name and age of person\n";
	cin.getline(name,30);
	cin>>age;
}

int main()
{
	person p1;
	p1.getdata();
	p1.putdata();
}
