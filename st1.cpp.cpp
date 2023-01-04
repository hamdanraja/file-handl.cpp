#include<iostream>
#include<conio.h>
using namespace std;
struct birth
{
	int day;
	int month;
	float year;
};
int main()
{
birth b;
cout<<"enter day of birth :";
cin>>b.day;
cout<<"enter month of birth :";
cin>>b.month;
cout<<"enter year of birth :";
cin>>b.year;
cout<<"\n your day of birth "<<b.day<<"/"<<b.month<<"/"<<b.year;
getch();
}


