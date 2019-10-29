#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class toh
{
	public:
	void tower(int ,char ,char ,char );
};

void toh::tower(int n,char s,char a,char d)
{
   	if(n==1)
	{
    	cout<<"Move disc 1 from "<<s<<" to "<<d<<"\n";
    	return;
   	}
   	else
	{
   		tower(n-1,s,d,a);
  		cout<<"Move disc "<<n<<" from "<<s<<" to "<<d<<"\n";
  		tower(n-1,a,s,d);
 	}
}

int main()
{
     int n;
     cout<<"\n*****Tower of Hanoi*****\n";
     cout<<"Enter number of discs :";
     cin>>n;
     cout<<"\n\n";
     toh a;
     
     a.tower(n,'S','A','D');
     getch();
     return 0;
}
