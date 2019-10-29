#include<iostream>
#include<conio.h>
using namespace std;

class graph
{
	bool a[5][5];
	int n,count,source,destination;
	public:
	int path(bool [][5],int ,int ,int );
	void input();
};

int graph::path(bool a[][5],int n,int s,int d)
{
	if(a[s][d])
	{
		if(s!=d)
		count++;
		a[d][s]=0;
		a[s][d]=0;
		s=source;
	}
	for(int i=0;i<n;i++)
	{
		if(a[s][i])
		{
			a[s][i]=0;
			a[i][s]=0;
			if(s!=i)
			return path(a,n,i,d);
		}
	}
	return count;
}

void graph::input()
{
	cout<<"Enter the number of vertex of graph :";
	cin>>n;
	char c='A';
	cout<<"Mark the edges of graph by using 1's/0's :\n";
	int m1=(int)c;
	a[n][n];
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
	char s,d;
	cout<<"Enter the source of graph :";
	cin>>s;
	cout<<"Enter the destination of graph :";
	cin>>d;
	int	i=(int)s-65;
	source=i;
	int j=(int)d-65;
	destination=j;
	count=0;
	cout<<"\nPaths between entered source and destination :"<<path(a,n,i,j);
}

int main()
{
	graph a;
	a.input();
	
	getch();
	return 0;
}
