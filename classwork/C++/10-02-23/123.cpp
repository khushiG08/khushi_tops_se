#include<iostream>
using namespace std;

class MO
{
	public:
		void add()
		{
		   int a,b;
		   cout<<"\nEnter A,\nB :";
		   cin >>a>>b;
		   cout<<"\nAddition :"<<(a+b);	
			
		}
	
};

int main()
{
	
	MO obj;
	obj.add();
	
	return 0;
}