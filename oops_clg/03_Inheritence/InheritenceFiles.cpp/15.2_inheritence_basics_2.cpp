//basic program for inheritence
//single inheritance

#include<iostream>


using namespace std;
class person
{
	char name[30];
	
	int age;
	
	public:

	
   void input_person()
    {
	cout<<"Enter name and age\n";
	cin>>name;
	cin>>age;
    }
    
	void display_person()
	{
	cout<<"\nName: "<<name<<"\nAge: "<<age;	
	}
};


class student : public person
{
	
	int roll;
	
	char branch[20];
	
   public:

   void input_student()
    {
    	
  	
      cout<<"Enter roll and branch\n";
	
	  cin>>roll;
      cin>>branch;
    }
    
	void display_student()
	{
	  display_person();
	  cout<<"\nRoll: "<<roll<<"\nBranch: "<<branch;	
	}
};

int main()
{
	student s1;
	
	s1.input_person();   //cannot be used with private or protected inheritance// compiler will give error
	
	s1.input_student();
	
	s1.display_student();
	
	
	
	
}






