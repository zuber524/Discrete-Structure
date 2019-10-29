#include<iostream>
#include<conio.h>
using namespace std;

class ff
{
	public :
		int fact(int);
		int fibo(int);
};

int ff::fact(int n)
{
	if(n>1)
	return n*fact(n-1);
	else
	return 1;
}
int ff::fibo(int n)
{
	if(n==0||n==1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}

int main()
{
	ff x;
	int m;
	cout<<"Enter the number :"<<endl;
	cin>>m;
	cout<<"The factorial of given number :"<<x.fact(m);
	cout<<"\nThe fibonacci of given number :";

	for(int i=0;i<m;i++)
	{
		cout<<x.fibo(i)<<"\t";
    }
	getch();
	return 0;
}
