#include<iostream>
#include<conio.h>
using namespace std;

class cp
{
	public :
	int fact(int );
	void input();
	
};
int cp::fact(int n)
{
	if(n>1)
	return n*fact(n-1);
	else
	return 1;
}
	
void cp::input()
{
	int n,r;
	cout<<"Enter n :";
	cin>>n;
	cout<<"Enter r :";
	cin>>r;
	int C,P;
	P=fact(n)/fact(n-r);
	C=fact(n)/(fact(r)*fact(n-r));
	cout<<"\nCombination of "<<n<<" distinct objects taken by "<<r<<" at a time (rCn) :";
	cout<<C;
	cout<<"\nPermutation of "<<n<<" distinct objects taken by "<<r<<" at a time (rPn) :";
	cout<<P<<endl;
}
int main()
{
	cp x;
	x.input();

	getch();
	return 0;
}
