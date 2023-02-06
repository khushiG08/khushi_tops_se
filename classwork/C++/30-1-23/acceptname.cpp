#include<iostream>
using namespace std;

class Name
{
	public:
	string name;
	void getName(string n)
	{
		name = n;
	}
	
	void putName()
	{
		cout<<"\nYour Name : "<<name;
	}
};

int main()
{
	Name n;
	string name;
	cout<<"\nenter name : ";
	getline(cin,name);
	n.getName(name);
	n.putName();
	
	return 0;

}