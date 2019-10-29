#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class function
{
	
	public:
		void input();
		int solution(int[],int,int);
};

void function:: input()
{
	int n;
	cout<<"Enter the highest degree of function :";
	cin>>n;	
	char c='A';
	int m=(int)c;
	int x[n];
	cout<<"Enter the co-effecients of function :\n";
	for(int i=0; i<=n;i++)
	{
		cout<<(char)m<<" :";
		cin>>x[i];
		m++;
	}
	cout<<"\nF(x)=";
	int q=n;
	for(int i=0; i<=n;i++)
	{
		cout<<x[i]<<"x^"<<q<<"+";
		q--;
	}
	cout<<"\b \n";
	cout<<"Enter the value of x :";
	int p;
	cin>>p;
	cout<<"Solution of the function :"<<solution(x,n,p);
}

int function::solution(int x[],int n,int p)
{
	int sol=0;
	int m=n;
	for(int i=0;i<=n;i++)
	{
		sol+=x[i]*pow(p,m);
		m--;	
	}
	return sol;
}

int main()
{
	function a;
	a.input();
	
	getch();
	return 0;
}
