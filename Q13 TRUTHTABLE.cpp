#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
using namespace std;


class tt
{

	public:
		void display();
		void menu();
		bool And(bool ,bool);
		bool Or(bool ,bool);
		bool Xor(bool ,bool);
		bool condition(bool ,bool);	
		bool bicondition(bool ,bool);
		bool Xnor(bool ,bool);
		bool Not(bool);
		bool Nand(bool ,bool);
		bool Nor(bool ,bool);	
};


void tt::display()
{
	cout<<endl;
	bool x[5]={0,0,1,1},y[5]={0,1,0,1};
	cout<<"x y\tAND\tOR\tXOR\t->\t<->\tXNOR\tNOT(x)\tNAND\tNOR\n";
	for(int i=0;i<4;i++)
	{
	cout<<x[i]<<" "<<y[i]<<"\t"<<And(x[i],y[i])<<"\t";
	cout<<Or(x[i],y[i])<<"\t"<<Xor(x[i],y[i])<<"\t"<<condition(x[i],y[i])<<"\t";
	cout<<bicondition(x[i],y[i])<<"\t"<<Xnor(x[i],y[i]);
	cout<<"\t"<<Not(x[i])<<"\t"<<Nand(x[i],y[i])<<"\t"<<Nor(x[i],y[i])<<"\n";
	}
	cout<<endl;
}

bool tt::And(bool x,bool y)
{
	if(x==y)
	return x;
	else
	return false;
}
bool tt::Or(bool x,bool y)
{
	if(x==y)
	return x;
	else
	return true;
}

bool tt::Xor(bool x,bool y)
{
	if(x==y)
	return false;
	else
	return true;
}

bool tt::condition(bool x,bool y)
{
	if(x==y)
	return true;
	else
	return y;
}

bool tt::bicondition(bool x,bool y)
{
	if(x==y)
	return true;
	else
	return false;
}


bool tt::Xnor(bool x,bool y)
{
	if(x==y)
	return true;
	else
	return false;
}


bool tt::Not(bool a)
{
	if(a)
	return false;
	else
	return true;
}


bool tt::Nand(bool x,bool y)
{
	if(x==y)
	return Not(x);
	else
	return true;
}


bool tt::Nor(bool x,bool y)
{
	if(x==y)
	return Not(x);
	else
	return false;
}

void tt::menu()
{
	cout<<endl;
	cout<<"Press t/T for truthtable / any key for user dependent truth values :";
	char c;
	cin>>c;
	if(c=='t'||c=='T')
	display();
	else
	{
		do{
			bool x,y;
			cout<<"x :";
			cin>>x;
			cout<<"y :";
			cin>>y;
			cout<<endl;
			cout<<"x y\tAND\tOR\tXOR\t->\t<->\tXNOR\tNOT(x)\tNAND\tNOR\n";
			cout<<x<<" "<<y<<"\t"<<And(x,y)<<"\t"<<Or(x,y);
			cout<<"\t"<<Xor(x,y)<<"\t"<<condition(x,y)<<"\t";
			cout<<bicondition(x,y)<<"\t"<<Xnor(x,y)<<"\t";
			cout<<Not(x)<<"\t"<<Nand(x,y)<<"\t"<<Nor(x,y)<<"\n";			
			cout<<endl;
			cout<<"\nPress r if you want to re enter the value :";
			cin>>c;
		}while(c=='R'||c=='r');
	}
}

int main()
{
	tt x;
	x.menu();
	
	getch();
	return 0;
}
