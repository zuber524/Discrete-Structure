#include<iostream>
#include<conio.h>
using namespace std;

class relation
{
	int n;
	char A[10];
	bool B[10][10];
	
	public:
		void check();
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


void relation::check()
{
	char c;
	do{
		read();
			
		display();
		if(reflexive()&&symmetric()&&transitive())
		cout<<"Relation is equivalent.\n";
		
		else if(reflexive()&&antisymmetric()&&transitive())
		cout<<"Relation is partial order relation.\n";
		
		else
		cout<<"Relation is neither partial order relation nor equivalent.\n";

		cout<<"Press y if you want to re-enter the value :";
		cin>>c;

	}while(c=='y'||c=='Y');
}



int main()
{
	relation x;
	x.check();

	getch();
	return 0;
}
