#include<iostream>
using namespace std;

class sample
{
	string name;
	int age;
	
	public:
		sample()
		{
			cout<<"\nDefualt Constructor.";
		}
		
		sample(string n,int a)
		{
			cout<<"\nPerameterized Constructor.";
			name = n;
			age = a;
		}
		
		void show()
		{
			cout<<"\nName ="<<name;
			cout<<"\nAge ="<<age;
		}
		
};
	

int main()
{
	sample obj1;
	int age;
	string name;
	cout<<"\nEnter your Name :";
	getline(cin,name);
	cout<<"\nEnter your Age :";
	cin>>age;
	//sample obj2("tops",20);
	sample obj2(name,age);
	obj2.show();
	return 0;
}