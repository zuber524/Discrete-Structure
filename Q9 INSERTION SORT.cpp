#include<iostream>
#include<conio.h>
using namespace std;

class sort
{
	public :
	void isn_sort(int [],int );
};

void sort::isn_sort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int count=0;
		for(int j=i-1;j>=0;j--)
		{	
		    if(a[j]>a[j+1])
		    {
			    count++;
	    	    int temp=a[j];
	    	    a[j]=a[j+1]; 
    		    a[j+1]=temp;    
	   		}
	    	else //if(a[j]<a[j+i])
    		{
	    		count++;
	    		break;
			}
		}
		cout<<"After "<<i<<" pass, The number of comparison is :"<<count<<endl;	
	}
	cout<<"The sorted array is :"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<",\t";
}

int main()
{
	sort b;
	int n,s;
	cout<<"Enter the size of array :"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array :"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	b.isn_sort(a,n);
	
	getch();
	return 0;
}
