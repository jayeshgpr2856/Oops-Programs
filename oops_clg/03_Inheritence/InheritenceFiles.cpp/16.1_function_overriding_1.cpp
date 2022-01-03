//FUNCTION OVERRIDING
//ambiguity in single inheritance due to function overriding

#include<iostream>


using namespace std;
class person
{
	char name[30];
	
	int age;
	
	public:
	
   void input()
    {
	
	cout<<"Enter name and age\n";
	
	cin>>name;
	
	cin>>age;
	
    }
    
   void display()
	{
		
	cout<<"\nName: "<<name<<"\nAge: "<<age;	
	
	}
	
};


class student : public person
{
	
	int roll;
	
	char branch[20];
	
   public:

   void input()
    {
    	
	  cout<<"Enter roll and branch\n";
	  
	  cin>>roll;
	  
      cin>>branch;
      
    }
    
	void show()
	{
		
	  display();
	  
	  cout<<"\nRoll: "<<roll<<"\nBranch: "<<branch;	
	  
	}
};

int main()
{
	
	person p1;
	
	p1.input();          //  base class object calls base class function
	
	p1.display(); 
	
	student s1;    
	
	s1.person::input();  //derived class object can call base class function by scope resolution operator
	
	s1.input();          // derived class object calls derived class function
	
	s1.display();
	
	return 0;
}






