#include<iostream>
#include<string>
#include<cstring>
struct member
{
	int code;
	string name;
	string city;
	string country;
};
int main()
{
	member m;
	cout<<"enter your code :";
	cin>>m.code;
		cout<<"enter your name :";
	cin>>m.name;
		cout<<"enter your city :";
	cin>>m.city;
		cout<<"enter your country :";
	cin>>m.country;
    cout<<"The	name of	member is:	"<<m.name<<".And city is: "<<m.city<<". code is: "<<m.code<<". And the country is: "<<m.country<<endl;
    cout<<endl;
	 return 0;

	
}

