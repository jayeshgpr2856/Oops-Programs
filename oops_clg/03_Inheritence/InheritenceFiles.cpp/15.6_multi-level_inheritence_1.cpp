
#include<iostream>
using namespace std;

class student
{

	int roll;
	
	char name[20];
	

   public:

   void input_student()
    {
    	
		
      cout<<"Enter Roll No. and Name of student\n";
	
	  cin>>roll;
      cin>>name;
    }
    
	void display_student()
	{

	  cout<<"\n\nRoll No. of Student: "<<roll<<"\nName of Student: "<<name<<endl;	
	}
};


class marks: public student
{
	
	protected:
		
		int sub1,sub2,sub3,sub4,sub5;
		int max;
		
		public:
		
		 void get_marks()
		{
			input_student();
			
			cout<<endl<<"Enter Max Marks"<<endl;
			cin>>max;
			cout<<endl<<"Enter Marks in 5 subjects"<<endl;
			cin>>sub1>>sub2>>sub3>>sub4>>sub5;
		}
		
		 void put_marks()
		{
			
			cout<<endl<<"********** Student Marklist **********"<<endl;
			
			display_student();
			cout<<endl<<"Marks in SUB1: "<<sub1<<endl;
			cout<<endl<<"Marks in SUB2: "<<sub2<<endl;
			cout<<endl<<"Marks in SUB2: "<<sub3<<endl;
			cout<<endl<<"Marks in SUB4: "<<sub4<<endl;
			cout<<endl<<"Marks in SUB5: "<<sub5<<endl;
			
		}
	
};

class result: public marks 
{
	float total;
	float percentage;
	
	public:
		
		void show_result()
		{
			get_marks();
			
			total = sub1 + sub2 +sub3 +sub4 + sub5;
			
			percentage = (total/(max*5))*100;
			
			put_marks();
			
			cout<<endl<<"Total Marks: "<<total<<"/"<<max*5<<endl;
			
			cout<<endl<<"Percentage: "<<percentage<<endl;
			
		
			
		}
	
};





int main()
{
	result student1;
	
    student1.show_result();

	

	return 0;
	
}






