
//Multiple Inheritence
// Problem - Ambiguity when more than one classes has same function name
#include<iostream>
using namespace std;

class Student
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
    
	void display_student() // void display() if used in both class will cause ambiguity
	{

	  cout<<"\n\nRoll No. of Student: "<<roll<<"\nName of Student: "<<name<<endl;	
	}
};


class Internal_Marks
{
	
	protected:
		
		int isub1, isub2, isub3, isub4, isub5;
		int imax;
		
		public:
		
		 void get_imarks()
		{
			
			
			cout<<endl<<"Enter Max Marks in Internal Subject"<<endl;
			cin>>imax;
			cout<<endl<<"Enter Internal Marks obtained in 5 subjects"<<endl;
			cin>>isub1>>isub2>>isub3>>isub4>>isub5;
		}
		
		 void put_imarks()
		{
			
			cout<<endl<<"********** Student Internal Marklist **********"<<endl;
			cout<<endl<<"Internal Max Marks: "<<imax<<endl;
			cout<<endl<<"Internal Marks in SUB1: "<<isub1<<endl;
			cout<<endl<<"Internal Marks in SUB2: "<<isub2<<endl;
			cout<<endl<<"Internal Marks in SUB2: "<<isub3<<endl;
			cout<<endl<<"Internal Marks in SUB4: "<<isub4<<endl;
			cout<<endl<<"Internal Marks in SUB5: "<<isub5<<endl;
			
		}
	
};


class External_Marks
{
	
	protected:
		
		int esub1, esub2, esub3, esub4, esub5;
		int emax;
		
		public:
		
		 void get_emarks()
		{
			
			
			cout<<endl<<"Enter Max Marks in External Subject"<<endl;
			cin>>emax;
			cout<<endl<<"Enter External Marks obtained in 5 subjects"<<endl;
			cin>>esub1>>esub2>>esub3>>esub4>>esub5;
		}
		
		 void put_emarks()
		{
			
			cout<<endl<<"********** Student External Marklist **********"<<endl;
			cout<<endl<<"External Max Marks: "<<emax<<endl;
			cout<<endl<<"External Marks in SUB1: "<<esub1<<endl;
			cout<<endl<<"External Marks in SUB2: "<<esub2<<endl;
			cout<<endl<<"External Marks in SUB2: "<<esub3<<endl;
			cout<<endl<<"External Marks in SUB4: "<<esub4<<endl;
			cout<<endl<<"External Marks in SUB5: "<<esub5<<endl;
			
		}
	
};

class result: public Student, public Internal_Marks, public External_Marks 
{
	int sub1,sub2,sub3,sub4,sub5;
	float itotal, etotal, total;
	float percentage;
	int max;
	
	public:
		
		void show_result()
		{
			input_student();
			
			get_imarks();
			
			get_emarks();
			
			sub1 = isub1 + esub1;
			
			sub2 = isub2 + esub2;
			
			sub3 = isub3 + esub3;
			
			sub4 = isub4 + esub4;
			
			sub5 = isub5 + esub5;
			
			max = imax + emax;
			
			itotal = isub1 + isub2 + isub3 + isub4 + isub5;
			
			etotal = esub1 + esub2 + esub3 + esub4 + esub5;
			
			total = itotal + etotal;
			
	     	cout<<endl<<"********** Student Result **********"<<endl;
	     	
			display_student();
			
			put_imarks();
			
			cout<<endl<<"Total Internal Marks: "<<itotal<<"/"<<imax*5<<endl;
			
			put_emarks();
			
			cout<<endl<<"Total External Marks: "<<etotal<<"/"<<emax*5<<endl;
			
			cout<<endl<<"********** Student Final Marklist **********"<<endl;
			cout<<endl<<"Max Marks: "<<max<<endl;
			cout<<endl<<"Total Marks in SUB1: "<<sub1<<"/"<<max<<endl;
			cout<<endl<<"Total Marks in SUB2: "<<sub2<<"/"<<max<<endl;
			cout<<endl<<"Total Marks in SUB3: "<<sub3<<"/"<<max<<endl;
			cout<<endl<<"Total Marks in SUB4: "<<sub4<<"/"<<max<<endl;
			cout<<endl<<"Total Marks in SUB5: "<<sub5<<"/"<<max<<endl;
			
			
			cout<<endl<<"Total Marks: "<<total<<"/"<<(max)*5<<endl;
			
			percentage = (total/(max*5))*100;
			
			cout<<endl<<"Percentage: "<<percentage<<endl;
			
			
			
		}
	
};





int main()
{
	result student1;
	
    student1.show_result();

	return 0;
	
}






