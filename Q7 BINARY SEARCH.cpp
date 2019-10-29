#include<iostream>
#include<conio.h>
using namespace std;

class bs
{
	public :
		void input();
		void ln_search(int ,int [],int );
		int bn_search(int ,int [],int ,int );
};

void bs::input()
{
	int n,s;
	cout<<"Enter the size of array :";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array :"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter the element you want to search :";
	cin>>s;

	char c;
	cout<<"Press L for linear searching or any key for binary searching :";
	cin>>c;
	if(c=='l'||c=='L')
		ln_search(s,a,n);
	else
	{
	if(bn_search(s,a,0,n)==-1)
		cout<<"Entered number is not in the list ."<<endl;
	else
		cout<<"Entered number is at "<<bn_search(s,a,0,n)<<" position ."<<endl;
	}	
}

void bs::ln_search(int search,int a[],int n)
{
	int i;
	bool flag=1;
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			flag=1;
			break;
		}
		else
			flag=0;
	}
	if(flag==1)
	cout<<"Entered number is at "<<++i<<" position ."<<endl;
	if(flag==0)
	cout<<"Entered number is not in the list ."<<endl;	
}

int bs::bn_search(int search,int a[],int s,int e)
{
	int mid=(s+e)/2;
	if(e>=1)
	{
		if(a[mid]==search)		return ++mid;
		if(a[mid]<search) 		return bn_search(search,a,mid+1,e);
		else					return bn_search(search,a,s,mid-1);
	}
	else return -1;
}

int main()
{
	bs a;
	a.input();
	
	getch();
	return 0;
}
