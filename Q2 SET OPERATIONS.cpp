#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class set
{
	int n;
	char A[10];
	
	public:
		void menu();
		void read();
		void display();
		bool subset();
		void union_();
		void intersection(); 
		void complement(set,char);
		void difference();
		void symdifference();
		void cartproduct();		
}a,b;

void set::read()
{
	cout<<"Enter the limit :";
	cin>>n;
	cout<<"Enter the elements :";
	for(int i=0;i<n;i++)
	cin>>A[i];
}

void set::display()
{
	cout<<"{ ";
	for(int i=0;i<n;i++)
	cout<<A[i]<<",";
	cout<<"\b}";
}

bool set::subset()
{
	bool flag;
	for(int i=0;i<b.n;i++)
	{
		for(int j=0;j<a.n;j++)
		{
			if(b.A[i]==a.A[j])
			{
				flag=true;
				break;
			}
			else
			flag=false;
		}
		if(flag==false)
		break;
	}
	return flag;
}

void set::union_()
{
	cout<<endl;
	char B[20];
	int count=0;
	for(int i=0;i<a.n;i++,count++)
	B[count]=a.A[i];
	
	for(int i=0;i<b.n;i++,count++)
	B[count]=b.A[i];
	cout<<"{ ";
	for(int i=0;i<count;i++)
	{
		bool flag=1;
		for(int j=i+1; j<count; j++)
		if(B[j]==B[i])
		flag=0;

		if(flag==1)
		cout<<B[i]<<",";
	}
	cout<<"\b}";
	cout<<endl;
}

void set::intersection()
{
	cout<<endl;
	cout<<"{ ";
	for(int i=0;i<b.n;i++)
	{
		bool flag=1;
		for(int j=0; j<a.n; j++)
			if(b.A[i]==a.A[j])
				flag=0;

		if(flag==0)
		cout<<b.A[i]<<",";
	}
	cout<<"\b}";
	cout<<endl;
}

void set::complement(set x,char A)
{
	cout<<endl;
	int o;
	cout<<"Enter your limit of universal set :";
	cin>>o;
	char B[o];
	cout<<"Enter your elements of universal set :";
	for(int i=0;i<o;i++)
	cin>>B[i];
	bool flag;

	cout<<"Complement of set "<<A<<" :\n";
	cout<<"{ ";
	for(int i=0;i<o;i++)
	{
		flag=1;
		for(int j=0;j<x.n;j++)
		if(B[i]==x.A[j])
		flag=0;
		
		if(flag==1)
		cout<<B[i]<<",";
	}
	cout<<"\b}";
	cout<<endl;
}

void set::difference()
{
	cout<<endl;
	cout<<"{ ";
	for(int i=0;i<a.n;i++)
	{
		bool flag=1;
		for(int j=0;j<b.n;j++)
			if(a.A[i]==b.A[j])
				flag=0;
		
		if(flag==1)
			cout<<a.A[i]<<",";
	}
	cout<<"\b}";
	cout<<endl;
}

void set::symdifference()
{
	cout<<endl;
	cout<<"{";
	for(int i=0;i<a.n;i++)
	{
		bool flag=1;
		for(int j=0;j<b.n;j++)
		if(a.A[i]==b.A[j])
		flag=0;
		
		if(flag==1)
		cout<<a.A[i]<<",";
	}
	for(int i=0;i<b.n;i++)
	{
		bool flag=1;
		for(int j=0;j<a.n;j++)
		if(b.A[i]==a.A[j])
		flag=0;
		
		if(flag==1)
		cout<<b.A[i]<<",";
	}
	cout<<"\b}";
	cout<<endl;
}

void set::cartproduct()
{
	cout<<endl;
	for(int i=0;i<b.n;i++)
	{
		for(int j=0;j<a.n;j++)
		{	
			cout<<"("<<a.A[j]<<","<<b.A[i]<<"),";
		}
		cout<<"\b \n";	
	}
	cout<<endl;	
}	

void set::menu()
{
	cout<<endl;
	char c,r='r';
	do{
		if(r=='r'||r=='R')
		{
			cout<<"For set A -->\n";
			a.read();
			cout<<endl;
			cout<<"For set B -->\n";
			b.read();
			cout<<endl;
		}
		
	cout<<"\n\n1)Subset.\n2)Union.\n3)Intersection.\n4)Complement.\n5)Difference.";
	cout<<"\n6)Symmetric difference.\n7)Cartesian product.\n0)Exit.\n\n";
	cout<<"A=";
	a.display();
	cout<<endl;
	cout<<"B=";
	b.display();
	cout<<endl;
 		int ch;
 		cout<<"Enter your choice :";
 		cin>>ch;
 		switch(ch)
 		{
 			case 1:
 				cout<<endl;
				if(subset())
				cout<<"Set B is subset of set A.";
				else
				cout<<"Set B is not subset of set A.";
				cout<<endl;
				break;
					
			case 2:
				cout<<"Union of set A & B :";
				union_();
				break;
			
			case 3:
				cout<<"Intersection of set A & B :";
				intersection();
				break;
			
			case 4:
				complement(a,'A');
				break;
			
			case 5:
				cout<<"Difference of set A & B :";
				difference();
				break;	
				
			case 6:
				cout<<"Symmetric difference of set A & B :";
				symdifference();
				break;	
			
			case 7:
				cout<<"Cartesian product of set A & B :";
				cartproduct();
				break;
			case 0:
				exit(10);
			
			default :
				cout<<"Invalid input.";
		}
		cout<<"\nPress y if you want to continue :";
		cin>>c;
		if(c=='y'||c=='Y')
		{
			cout<<"Press r if you want to re enter the value :";
			cin>>r;
		}
	}while(c=='y'||c=='Y');
}

int main()
{
	set x;
	x.menu();
	
	getch();
	return 0;
}
