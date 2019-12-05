#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	double a,b;
	int m,n,o,p,s;
	char city[20],ch[20];
	char str1[20]="PUNE";
	char str2[20]="MUMBAI";
	char str3[20]="BANGLORE";
	char str4[20]="CHENNAI";
	char v[20]="no";
	while(1){	
		cout<<"\nEnter The City Name In Capital Letters:";
		cin>>city;
		cout<<"\nEnter 'yes' Or 'no' In Small Letters ";
		cin>>ch;
		n=strcmp(city,str1);
		m=strcmp(city,str2);
		o=strcmp(city,str3);
		p=strcmp(city,str4);
		s=strcmp(ch,v);
		try{
			if(n!=0 && m!=0 && o!=0 && p!=0){
				throw 1;
			}
			else if(s==0){
				throw 2;
			}
			else	
			{
				cout<<"\nYour city is :"<<city;
				cout<<"\nYour have a vehicle";
				break;
			}
   		}catch(int e){
			switch(e)
			{
				case 1: cout<<"\nYour city is not in our list";
					break;
				case 2: cout<<"\nYou dont have vehicle";
					break;
			}
    	}
	}
	return 0;
}

