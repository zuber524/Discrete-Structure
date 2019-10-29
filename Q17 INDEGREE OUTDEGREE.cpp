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
	m1=(int)c;
	cout<<"**Vertex**\t**In-degree**\t**Out-degree**\n";
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
		cout<<"\t"<<char(m1)<<"\t\t"<<in<<"\t\t"<<out<<"\n";
		m1++;
	}	
}

int main()
{
	graph a;
	a.input();
	
	getch();
	return 0;
}
