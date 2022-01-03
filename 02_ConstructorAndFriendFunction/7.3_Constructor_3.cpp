#include<iostream>

using namespace std;

class student
{
	int roll;
	string name;
	public :
	student()
	{
		roll=0;
		name = ""; 
	}
	
	student(int r , string nm)
	{
		roll=r;
		name = nm;
	}
	
	student(string nm, int r)
	{
		roll=r;
		name=nm;
	}
	
	student(const student &);
	
	
	void getdata()
	{
		cout<<"\nEnter roll no. and name of student\n";
		cin>>roll;
		cin>>name;
	}
	void putdata()
	{
		cout<<"\nrollno = "<<roll<<endl<<"name = "<<name<<endl;
	}
};

student::student(const student & sref)
{
	roll = sref.roll;
	name= sref.name;
}

int main()
{
	
	student s1;
	s1.putdata();

	
	student s2(25, "Ashish");
	s2.putdata();
	
	student ss2("Sachin", 10);
	ss2.putdata();
	
	student s3(s2);
	s3.putdata();
	
	student s4;  
	s4.getdata();
	
	student s5(s4);
	s5.putdata();
	


	
	student stu1[5]; // call default constructor for every object
 //student stu1[5] = student(0,"Anonymous"); // calls same parametrized constructor for every object
	for(int i=0; i<5;i++)
	{
		stu1[i].putdata();
	}
	
	student stu2[3] = { student(), student(2,"Vijay"), student("Rahul", 65)};
	for(int i=0; i<3;i++)
	{
		stu2[i].putdata();
	}
	
	
  return 0;
}
  
