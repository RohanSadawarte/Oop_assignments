#include<iostream>
#include<string.h>

using namespace std;
class Student{
    private:
    	char name[30],dob[10],bdg[15];
    	int rollno,contact;
    public:
    	static int count;
    	friend class Personal;
    	Personal()
		{
    	    char *name = new char[40];
    	    char *dob = new char[80];
    	    char *bdg = new char[15];
    	    rollno=contact=0;
    	}
    static void recordC(){
        cout<<"\n Total Records :"<<count;
    }
};

class Personal
{
	private:
		char year[7],div[2],lisence[20],add[10],contact[10];
	public:
		void getdata(Student *obj);
		void displaydata(Student *obj);
		friend class Student;
};

int Student::count=0;

void Personal::getdata(Student *obj)
{
	cout<<"\n Enter Name:";
	cin.ignore();
	cin.getline(obj->name,39);

	cout<<"\n Enter Year : ";
	cin>>this->year;

	cout<<"\n Enter Division : ";
	cin>>this->div;

	cout<<"\n Enter Date Of Birth: ";
	cin>>obj->dob;

	cout<<"\n Enter Blood Group :";
	cin.ignore();
	cin.getline(obj->bdg,14);

	cout<<"\n Enter Roll No.: ";
	cin>>obj->rollno;

	cout<<"\n Enter Phone No. :";
	cin>>this->contact;

	cout<<"\n ENTER CITY: ";
	cin>>this->add;

	cout<<"\n Enter Licence No.: ";
	cin.ignore();
	cin.getline(this->lisence,19);

	obj->count++;
}
void Personal::displaydata(Student *obj)
{

	cout<<"\nName = "<<obj->name;
	cout<<"\nYear = "<<this->year;
	cout<<"\nDivision = "<<this->div;
	cout<<"\nRoll No. = "<<obj->rollno;
	cout<<"\nDate of Birth = "<<obj->dob;
	cout<<"\nBlood Group = "<<obj->bdg;
	cout<<"\nContact No. = "<<this->contact;
	cout<<"\nCity = "<<this->add;
	cout<<"\nLisence No. = "<<this->lisence;
	cout<<"\n";
}
int main()
{
	Personal *p1[30];
	Student *p2[30];
	int n=0,ch,i;
	do
	{
		cout<<"Enter Your Choice:";
		cout<<"\n1.Enter the Information of Student \n2.Display the Information \n3.Exit \n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"ENTER INFORMATION:\n";
				p1[n]=new Personal;
				p2[n]=new Student;
				p1[n]->getdata(p2[n]);
				n++;
				Student::recordC();
				break;
			case 2:
				for(i=0;i<n;i++)
					p1[i]->displaydata(p2[i]);
				Student::recordC();
				break;

			case 3:
				cout<<"\n\t\tThank You!\n";
				break;
		}
	}while(ch!=3);
	return 0;
}

