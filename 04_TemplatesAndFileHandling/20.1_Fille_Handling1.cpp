#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	
    ofstream fout;              //ofstream creates output stream fout     // for writing data to file// output
    
    
    
    fout.open("MyFile1.txt");
    
    
    
    
    
    fout<< "This is my first data on file" << endl;  // write data to file....output
    
    
    
    string s1,s2;
    
    cout<<endl<<"Enter String1 to be written in file"<<endl;
    
    getline(cin,s1);
	
    cout<<endl<<"Enter String2 to be written in file"<<endl;  
    
     getline(cin,s2);
    
    fout<<s1<<endl<<s2<<endl;
    
    
    
    char a[30];
    
    cout<<endl<<"Enter String3 to be written in file"<<endl; 
    
    cin.getline(a,30);  
    
    for(int i = 0; i<strlen(a); i++)     //write character by character
    {
    	fout.put(a[i]);
    }
    
    fout.close();
    
    
//    fout.open("MyFile1.txt");
    
//    fout<<"Entering data after reopening file in write mode, old data will be deleted."<<endl;
    
    
//    fout.close();
    
//   fout.open("MyFile1.txt", ios::app); //append mode

    
//    fout<<"I am entering data in append mode."<<endl<<"The data is appended at last."<<endl<<"This is file handling example."<<endl;  
    
    
//    fout.close();
    
    
    
    
//    cout<<endl<<"Reading from file..."<<endl;    // Input or read data from file 
    
//     ifstream fin;   //ifstream creates input stream fin     // for reading data from file// output
    
// 	fin.open("MyFile1.txt");
	
	 
// 	 cout<<endl<<endl<<".....Reading single word....."<<endl<<endl;
    
//     string s3,s4,s5;
    
//     fin>>s3;
    
//     fin>>s4;
    
//     fin>>s5;
    
//     cout<<s3<<" "<<s4<<" "<<s5<<endl;   //read word by word ignors spaces and new lines
    
//     fin.seekg(0, ios::beg);  //fin.seekg(0);
//     int p = fin.tellg();
    
//     cout<<endl<<endl<<p<<endl<<endl;
    
//      cout<<endl<<endl<<".....Reading word by word......"<<endl<<endl;
    
//     string s;
    
//     while(fin>>s)
//     {
    	
    	
//     	cout<<s<<" ";
    	
//     }                          //input pointer  value becomes -1 when it encounters eof
    
//     fin.seekg(0);
//      p = fin.tellg();       //output is -1 so use fin.clear()
    
//     cout<<endl<<endl<<p<<endl<<endl;
    
//     fin.clear();
    
//      fin.seekg(0);
//      p = fin.tellg();       
    
//     cout<<endl<<endl<<p<<endl<<endl;
    
//     cout<<endl<<endl<<".....Reading single line...."<<endl<<endl;
    
//    string s6,s7,s8;
    
//     getline(fin, s6);  // reads single line
    
//     getline(fin, s7);
      
//     getline(fin, s8);
    
//     cout<<s6<<endl<<s7<<endl<<s8<<endl;   
    
   
    
//     fin.clear();
    
//      fin.seekg(0);
     
//       cout<<endl<<endl<<".....Reading Line by Line....."<<endl<<endl;
    
//     string ss;
    
//     while(fin)      
//     {
//     	getline(fin,ss);
    	
//     	cout<<ss<<endl;
    	
//     }
    
 
//   fin.clear();
    
//      fin.seekg(0);
 
//     cout<<endl<<endl<<".....Reading character by character......."<<endl<<endl;
    
//     char ch;
    
//     while(fin)     // while(!fin.eof())     //read character by character
//     {
//     	fin.get(ch); 
    	
//     	cout<<ch;
		
		
//     } 
    
//  /*   
//     while(fin.get(ch)))     // sometimes last character may be repated so use this
//     {
    
    	
//     	cout<<ch;
		
		
//     } 
     
//     */
   
   
//     fin.close();
 
    
    return 0;
}









