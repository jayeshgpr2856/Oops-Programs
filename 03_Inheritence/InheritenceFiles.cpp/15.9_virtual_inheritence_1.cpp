//use of virtual base class
//Virtual Inheritance
//To avoid diamond problem due to multipath inheritance


#include<iostream>
using namespace std;

class student
{ 
    
    	
	int roll;
	char name[20];
    
	public: 

	void getstudent()
	{
		cout<< "Enter roll & name of student"<<endl;
		cin >> roll >> name;
	}
	
	void putstudent()
	{
		cout <<endl<<"Roll No. of Student: "<<roll<<endl<<"Name of Student: "<<name<<endl;
		
	}
};

class marks:  virtual public student
{

	protected:
		
	int m, p, c;
	
	public:
		
	void getmarks()
	{
		cout<<endl<<"Max Marks: 100"<<endl;
		cout<<endl<< "Enter Marks in Physics: "<<endl;
		cin>>p;
		cout <<endl<< "Enter Marks in Chemistry: "<<endl;
		cin>>c;
		cout <<endl<< "Enter Marks in Maths: "<<endl;
		cin>>m;
	}
	
	void putmarks()
	{
		cout<<endl<<"Marks Obtained out of 100"<<endl;
		cout<<"Maths: "<<m<<endl<<"Physics: "<<p<<endl<<"Chemistry: "<<c<<endl;
	}
};

class sports: public virtual  student
{
	protected:
	int spmarks;
	
	public:
	void getsports()
	{
		cout <<endl<< "Enter sports marks:"<<endl;
		cin >> spmarks;
		cout<<endl;
	}
	
	void putsports()
	{
		cout<< "Sports Marks: "<<spmarks<<endl;
	
	}
};

class result : public marks, public sports
{
	int total;
	
	
	public :
		
		void show();

};

	void result::show()
	{
		total = m + p + c + spmarks;
		
		cout<<endl<<"********** Student Marklist **********"<<endl;
		
		putstudent();
		
		putmarks();
		
		putsports();
		
		cout <<endl<<"Total Marks: " << total;
		
	}

int main()
{
	result student1;
	
	student1.getstudent();
	
	student1.getmarks();
	
	student1.getsports();
	
	student1.show();
	
	return 0;
};
