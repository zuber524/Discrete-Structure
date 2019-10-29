#include<iostream>
#include<conio.h>
using namespace std;

class permutation
{
	public:
		int count=0;
		void swap(char &,char &);
		void read();
		void permute(char [],int , int );
};

void permutation::swap(char &a,char &b)
{
	char temp=a;
	a=b;
	b=temp;
}

void permutation::read()
{
	int n;
	cout<<"Enter the size of the list :";
	cin>>n;
	char a[n];
	cout<<"Enter the elements of the list :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	permute(a,0,n-1);
}

void permutation::permute(char a[],int s,int n)
{
	if(s==n)
	{
		for(int i=0;i<=n;i++)
		{
		 cout<<a[i]<<"\t";
	    }
	  	 cout<<"\n";
		count++;
	}
	else
	{
		for(int i=s;i<=n;i++)
		{
			swap(a[s],a[i]);
			permute(a,s+1,n);
			swap(a[s],a[i]);
		}
	}
}
int main()
{
	permutation a;
	a.read();
	cout<<"Number of count :"<<a.count;
	
	getch();
	return 0;	
}
