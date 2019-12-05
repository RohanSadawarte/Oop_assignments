#include<iostream>
using namespace std;
template<class T>
void selectionSort(T a[], int n){
	int i,j;
	for (j=0;j<n-1;j++){
		int t = j;
	    for (i=j+1;i<n;i++){
	    	if (a[i]<a[t])
	        	t=i;
	    }
	    if(t!=j)
	        swap(a[j],a[t]);
	}
}
int main()
{
    int choice,i,n;
    cout<<"Enter number of terms you want as Integers/Float\n";
    cin>>n;
    int in[n];
    cout<<"Enter Integers: \n";
    for(i=0;i<n;i++)
    	cin>>in[i];
    float fl[n];
    cout<<"Enter Float Numbers : \n";
    for(i=0;i<n;i++)
    	cin>>fl[i];
    do{
    	cout<<"\nEnter Your Choice : \n 1.Sort Integers \n 2.Sort Float Numbers \n 3.Exit"<<endl;
    	cin>>choice;
    	switch(choice)
    	{
    	    case 1 :cout<<"Sorted Integers : "<<endl;
    	            selectionSort(in,n);
    	            for(int i=0;i<n;i++)
    	    	        cout<<in[i]<<"\t";
    	            break;
    	    case 2 :cout<<"Sorted Float Numbers : "<<endl;
    	            selectionSort(fl,n);
    	            for(int j=0;j<n;j++)
    	 	           cout<<fl[j]<<"\t";
    	            break;
    	    default :cout<<"Incorrect Choice"<<endl;
    	            break;
    	}
    }while(choice!=3);
 return 0;
 }
