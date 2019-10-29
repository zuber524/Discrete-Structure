#include<iostream>
#include<conio.h>
using namespace std;

class relation
{
	int n;
	char A[10];
	bool B[10][10];
	
	public:
		void menu();
		void read();
		void display();
		bool reflexive();
		bool symmetric();
		bool antisymmetric(); 
		bool transitive();
};

void relation::read()
{
	cout<<endl;
	cout<<"Enter the limit of set A:";
	cin>>n;
	cout<<"Enter the elements of set A:\n";
	for(int i=0;i<n;i++)
	cin>>A[i];
	cout<<"Mark the pair to include in relation R on set A(press 1 for yes and 0 for no) :\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"("<<A[i]<<","<<A[j]<<") :";
			cin>>B[i][j];
		}
	}
	cout<<endl;
}

void relation::display()
{
	cout<<endl;
	cout<<"A :";
	cout<<"{";
	for(int i=0;i<n;i++)
	cout<<A[i]<<",";
	cout<<"\b}";
	cout<<endl;
	cout<<"R :";
	cout<<"{";
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	if(B[i][j]==1)
	cout<<" ("<<A[i]<<","<<A[j]<<"),";
	cout<<"\b}";
	cout<<endl;
}

bool relation::reflexive()
{
	cout<<endl;
	bool flag=true;
	int i=0,j=0;
	while(i<n&&j<n)
	{
		if(i==j)
		{
			if(B[i][j]==0)
			{
				flag=false;
				break;
			}
			else
			{
				i++;
				j++;
			}
		}
	}
	return flag;
}

bool relation::symmetric()
{
	bool flag;
	for(int i=0;i<n;i++)
	{
		flag=true;
		for(int j=0;j<n;j++)
		{
			if(B[i][j]==1)
			{
				if(B[j][i]==0)
				{
					flag=false;
					break;
				}	
			}
		}
		if(flag==false)
			break;
	}
	return flag;
}

bool relation::antisymmetric()
{
	bool flag;
	for(int i=0;i<n;i++)
	{
		flag=true;
		for(int j=0;j<n;j++)
		{
			if(B[i][j]==1)
			{
				if(i==j)
				{
					flag=true;
				}
				else if(B[j][i]==1)
				{
					flag=false;
					break;
				}	
			}
		}
		if(flag==false)
			break;
	}
	return flag;
}

bool relation::transitive()
{
	bool flag;
	for(int i=0;i<n;i++)
	{
		flag=true;
		for(int j=0;j<n;j++)
		{
			if(B[i][j]==1)
			{
				if(i==j)
				{
					flag=true;
				}
				else
				{
					for(int k=0;k<n;k++)
					{
						if(B[j][k]==1)
						{
							if(B[i][k]==0)
							{
								flag=false;
								break;
							}
						}
						else
					 		flag=true;
					}
					if(flag==false)
					break;
				}
			}
		}
		if(flag==false)
		break;
	}
	return flag;
}


void relation::menu()
{
	char c,r='r';
	do{
		if(r=='r'||r=='R')
			read();
			
		cout<<"\n\n1)Reflexive.\n2)Symmetric.\n3)Anti-symmetric.\n4)Transitive.\n0)Exit.\n\n";
		display();	
 		int ch;
 		cout<<"Enter your choice :";
 		cin>>ch;
 		switch(ch)
 		{
 			case 1:
 				if(reflexive()==false)
				cout<<"Relation is not reflexive.";
				else
				cout<<"Relation is reflexive.";
				break;
				
			case 2:
				if(symmetric()==false)
				cout<<"Relation is not symmetric.";
				else
				cout<<"Relation is symmetric.";
				break;
				
			case 3:
				if(antisymmetric()==false)
				cout<<"Relation is not antisymmetric.";
				else
				cout<<"Relation is antisymmetric.";
				break;
				
			case 4:
				if(transitive()==false)
				cout<<"Relation is not transitive.";
				else
				cout<<"Relation is transitive.";
				break;
	
			case 0:
				exit(0);
				
			default :
				cout<<"Invalid input.";
		}
		cout<<"\nPress y if you want to continue :";
		cin>>c;
		if(c=='y'||c=='Y')
		{
		cout<<"Press r if you want to re-enter the value :";
		cin>>r;
		}
	}while(c=='y'||c=='Y');
}


int main()
{
	relation x;
	x.menu();

	getch();
	return 0;
}
