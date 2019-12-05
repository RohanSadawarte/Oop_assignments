#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   fstream file; 							   										
   file.open("MyFiles.txt",ios::out);		
   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       return 0;
   }
   cout<<"File created successfully."<<endl;
   file<<"SY BTECH COMP A VIIT, PUNE";		
   file.close();							
   file.open("MyFiles.txt",ios::in);		
   if(!file)
   {
       cout<<"Error in opening file!!!"<<endl;
       return 0;
   }   
   char ch; 							
   cout<<"File content: \n";
   while(!file.eof())					
   {
       file>>ch; 						
       cout<<ch;
   }
   file.close(); 					   
   return 0;
}

 
