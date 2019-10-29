#include<iostream>
#include<conio.h>
using namespace std;

class graph
{
	public:
		bool input();
};

bool graph::input()
{
	int n;
    cout<<"Enter the number of vertices :";
	cin>>n;
	bool a[n][n];
	char c='A';
	int m1=(int)c;
	cout<<"Mark the edges by 1s/0s :\n";
	for(int i=0;i<n;i++)
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
	int count=0;
	bool flag=true;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
    	 if(i==j)
	    { 
	         if(a[i][j]==0)
	       {
	         count++;
	       }
        }
        else if(a[i][j]==0)
	    {
	   	  flag=false;
	 	  break;
	    }
	 
	  }
	  if(flag==false)
	  break;
	}
    if(count==n&&flag==true)
    {
    	cout<<"Complete graph .";
	}
	else
	{
		cout<<"Not complete graph .";
	}

}
int main()
{
	graph a;
	a.input();
	
	getch();
	return 0;
}


