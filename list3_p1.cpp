/*. Write a C++ program that declares student structure with data 
members name, std, percentage. Take value for these data members 
and display it.*/
#include<iostream>
using namespace std;

struct student
{
	string name;
	int sem;
	float p;
};
int main()
{
	cout<<"Purohit Akruti K."<<endl;
	cout<<"220130318033"<<endl;
	
	struct s1;
	cout<<"Enter your name:";
	cin>>s1.name;
	
	cout<<"Enter your semester:";
	cin>>s1.sem;
	
	cout<<"Enter your percentage:";
	cin>>s1.p;
	
	cout<<"Your name is:"<<s1.name<<endl;
	cout<<"Your semester is:"<<s1.sem<<endl;
	cout<<"Your percentage is:"<<s1.p<<endl;
}
