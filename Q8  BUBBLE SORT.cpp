#include<iostream>
#include<conio.h>
using namespace std;

class sort
{
	public :
		void bbl_sort(int [],int );
};

void sort::bbl_sort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n-1;j++)
		{
		 	if(a[j]>a[j+1])
		 	{
	    	  int temp=a[j];
	    	  a[j]=a[j+1];
	    	  a[j+1]=temp;
			}	
			count++;  
		}
		cout<<"After "<<i<<" pass the number of comparison is :"<<count<<endl;
	}
	cout<<"The sorted array is :"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<",\t";
}
int main()
{
	sort a;
	int n,s;
	cout<<"Enter the size of array :"<<endl;
	cin>>n;
	int x[n];
	cout<<"Enter the elements of array :"<<endl;
	for(int i=0;i<n;i++)
	cin>>x[i];
	
	a.bbl_sort(x,n);
	
	getch();
	return 0;
}
