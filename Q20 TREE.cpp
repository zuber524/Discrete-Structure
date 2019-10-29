#include<iostream>
#include<conio.h>
using namespace std;

class tree
{
	public:
	void input();
};

void tree::input()
{	
	int m,i;
	cout<<"Enter the type of tree (full m-ary) :";
	cin>>m;
	cout<<"Enter the number of internal node :";
	cin>>i;
	int l=(m-1)*i+1;
	cout<<"The number of leaves nodes is :"<<l;
}

int main()
{
	tree a;
	a.input();
	
	getch();
	return 0;
}
