#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class rec
{
	int n;
	public:
	void menu();
	int  eq1(int );
	int eq2(int );
	int eq3(int );
};

int rec::eq1(int x)
{	
	if(x==0)
	return 1;
	else
	return eq1(x-1)+x;	
}
	
int rec::eq2(int x)
{	
	if(x==0)
	return 1;
	else
	return eq2(x-1)+x*x;	
}
	
int rec::eq3(int x)
{	
	if(x==1)
	return 1;
	else
	return 2*(eq3(x-1)/2)+x;	
}
	

void rec::menu()
{

	cout<<"1)T(n)=T(n-1)+n\tfor T(0)=1\n2)T(n)=T(n-1)+n^2";
	cout<<"\tfor T(0)=1\n3)T(n)=2*(T(n-1)/2)+n\tfor T(1)=1\n";
	int ch;
	char c,r='r';
	
	do
	{
		if(r=='r'||r=='R')
		{
			cout<<"Enter a number :";
			cin>>n;
		}
		cout<<"Enter your choice :";
		cin>>ch;

		switch(ch)
		{
			case 1:
			cout<<"T("<<n<<")=T("<<n-1<<")+"<<n<<" -->"<<eq1(n);
			break;
			
			case 2:
			cout<<"T("<<n<<")=T("<<n-1<<")+"<<n*n<<" -->"<<eq2(n);
			break;
			
			case 3:
			cout<<"T("<<n<<")=2T("<<n-1<<")/2+"<<n<<" -->"<<eq3(n);
			break;
			
			default:
				cout<<"invalid input.";
	
		}
				
		cout<<"\nPress y if you want to continue  :";
		cin>>c;	
		if(c=='y'||c=='Y')
		{	
		cout<<"\nPress r if you want to re enter the value  :";
		cin>>r;
		}
	}while(c=='y'||c=='y');
}


int main()
{
	rec a;
	a.menu();

	getch();
	return 0;
}
