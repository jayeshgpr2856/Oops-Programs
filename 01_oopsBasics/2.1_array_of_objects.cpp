// Program for Array of objects
#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
	void getdata();
	void putdata()
	{
	cout<<"\nName: "<<name<<"\nAge: "<<age;	
	}
};
void person::getdata()
{
	cout<<"Enter name and age\n";
	cin>>name;
	cin>>age;
}
int main()
{
	person p[5];  //creating array of 5 persons.
	for(int i=0; i<5; i++)
	{
		cout<<"Enter details of person"<<i+1<<"\n";
		p[i].getdata();

	}
	for(int i=0; i<5; i++)
	{
		cout<<"\nDetails of person"<<i+1;
		p[i].putdata();
	}
	
}






