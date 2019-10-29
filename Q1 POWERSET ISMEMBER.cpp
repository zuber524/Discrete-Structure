#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

class set
{
	int n;
	char A[5],s;
	
	public:
	void input()
	{
		cout<<"Enter the limit of set :";
		cin>>n;	
		cout<<"Enter the elements of set :";
		for(int i=0;i<n;i++)
		cin>>A[i];	
		cout<<"Search an element :";
		cin>>s;	
		if(ismember(s,A,n))
		cout<<"Your searched element is in set.";
		else
		cout<<"Your searched element is not in set.";
		cout<<endl;
		powerset(A,n);
	}
	
	bool ismember(char search, char a[], int n)
	{
		bool flag;
		for(int i=0;i<n;i++)
		{
			if (a[i]==search)
			{
				flag=true;
				break;
			}
			else
			flag=false;
		}
		return flag;
	}

	void powerset(char a[], int n)
	{
		int m=pow(2,n);
		cout<<"The power set of given set :\n";
		cout<<"{";
		for (int i=0;i<m;i++)
		{
			if(i==0)
			cout<<"{";
			cout<<"{";
			for(int j=0;j<n;j++)
			{
				if (i&(1<<j))
				cout<<a[j]<<",";
			}
			cout<<"\b},";
		}
		cout<<"\b}";
	}
};

int main()
{
	set a;
	a.input();
	
	getch();
	return 0;
}
