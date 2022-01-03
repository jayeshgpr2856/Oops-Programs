
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
    	
  	  input_person();
		
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


class faculty : public person
{
	char dept[20];
	int fid;
	
   public:

   void input_faculty()
    {
    	
  	  input_person();
		
      cout<<"Enter Department & Faculty ID\n";
      
      cin>>dept;
	
	  cin>>fid;
      
    }
    
	void display_faculty()
	{
	  display_person();
	  cout<<"\nDeparment: "<<dept<<"\nFaculty ID: "<<fid<<"\n";	
	}
};

int main()
{
	student s1;
	
	faculty f1;
	
	cout<<".....STUDENT....\n\n";
	
	s1.input_student();
	
	s1.display_student();
	
    cout<<"\n\n.....FACULTY....\n\n";
	
	f1.input_faculty();
	
	f1.display_faculty();
	

	return 0;
	
}






