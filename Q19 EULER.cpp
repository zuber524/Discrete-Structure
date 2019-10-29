#include<iostream>
#include<conio.h>
using namespace std;

class graph
{
	public:
	void input();
};

void graph::input()
{	
	int n;
	cout<<"Enter the number of vertex of graph :";
	cin>>n;
	bool a[n][n];
	char c='A';
	cout<<"Mark the edges of graph by using 1s/0s :\n";
	int m1=(int)c;
	int q1=0;
	for(int i=0; i<n;i++)
	{
		int m2=(int)c;
		for(int j=0;j<n;j++)
		{
			cout<<"("<<(char)m1<<","<<(char)m2<<") :";
			cin>>a[i][j];
			m2++;
		}
		m1++;
	}	
	int q=0,p=0;
	for(int i=0; i<n;i++)
	{ 
		int in=0,out=0;
		for(int j=0;j<n;j++)
		{
			if(a[i][j])
			out++;
			if(a[j][i])
			in++;
		}
		if(in==out)
		q++;
		else if(in+1==out||in-1==out)
		p++;
	}
	if(q==n)
	cout<<"Euler circuit exist. ";
	else if(p==2&&q==n-2)
	cout<<"Euler path exist.";
	else 
	cout<<"Neither euler cicuit nor eular path exist .";	
}


int main()
{
	graph a;
	a.input();
	
	getch();
	return 0;
}
