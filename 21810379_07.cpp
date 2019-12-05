#include<iostream>
#include <list> 
#include <iterator> 
using namespace std; 


int showlist(list <int> g) 	
{ 
	list<int>::iterator it; 	
	for(it=g.begin();it!= g.end(); ++it) 
		cout<<'\t'<<*it; 
	cout<<'\n'; 
} 

int main() 
{ 
	int n, value;
	list <int> l1; 
	cout<<"List status:"<<l1.empty();	
	cout<<"\nEnter number of elements you want to add in the list : ";
	cin>>n;
	cout<<"\nEnter"<<n<<" elements : ";
	for(int i=0; i<n; i++){
		cin>>value;
		l1.push_back(value);				
	} 
	cout << "\nList 1 (l1) is:"; 
	showlist(l1); 
	cout << "\nlist1.front():" << l1.front(); 	
	cout << "\nlist1.back():" << l1.back(); 		
	cout << "\nlist1.pop_front():"; 	
	l1.pop_front(); 
	showlist(l1); 
	cout << "list1.reverse():"; 
	l1.reverse(); 
	showlist(l1); 
	cout<<"Sorting():";		
	l1.sort();
	showlist(l1);
	cout<<"The Unique List is:";
	l1.unique();
	cout<<"\n";
	showlist(l1); 
	cout<<"List status:"<<l1.empty();
	return 0; 
}
 
 
