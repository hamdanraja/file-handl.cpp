#include<iostream>
#include<conio.h>
using namespace std;
struct phone
{
	int ncode;
	int acode;
	long number;
};
int main()
{
	phone p1,p2={92,41,4567890};
	cout<<"enter national code :"<<endl;
	cin>>p1.ncode;
	cout<<"enter area code :"<<endl;
	cin>>p1.acode;
	cout<<"enter phone number :"<<endl;
	cin>>p1.number;
	cout<<"phone number 1:+";
	cout<<p1.ncode<<"-"<<p1.acode<<"-"<<p1.number<<endl;
		cout<<"phone number 2:+";
	cout<<p2.ncode<<"-"<<p2.acode<<"-"<<p2.number<<endl;
	getch();
}
