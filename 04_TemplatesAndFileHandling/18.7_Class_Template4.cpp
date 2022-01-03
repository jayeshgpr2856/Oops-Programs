#include<iostream>

using namespace std;
template<class T>
class sample
{
	T *a;
	int s;
	public:
		sample(int size)
		{
			s=size;
			a=new T[s];
		}
		void input()
		{
			cout<<"\nEnter array of size "<<s<<endl;
			
			for(int i=0;i<s;i++)
			{
				cin>>a[i];
			}
		}
		
		void output()
		{
			cout<<"\nThe Array is:"<<endl;
			for(int i=0;i<s;i++)
			{
				cout<<a[i]<<"  ";
			}
		}
		
		~sample()
		{
			delete [] a;
			a =NULL;
		}
};
main()
{
	int n;
	
	cout<<"Enter size of array"<<endl;
	
	cin>>n;
	
	cout<<endl<<".....Integer Array....."<<endl;
	
	sample <int> s1(n);
		
	s1.input();
	
	s1.output();
	
	cout<<endl<<endl<<"......Float Array......"<<endl;
	
	sample <float> s2(n);

	
	s2.input();
	
	s2.output();
	

	
	cout<<endl<<endl<<"......Character Array......"<<endl;
	
    sample <char> s3(n);
	
	s3.input();
	
	s3.output();
}
