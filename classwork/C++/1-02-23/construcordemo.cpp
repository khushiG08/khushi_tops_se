#include<iostream>
using namespace std;

class sample
{
	public:
		sample()
		{
			cout<<"\nDefualt Constructor.";
			show();
		}
		void show()
		{
			cout<<"\nThis is show method.";
		}
		
};
	

int main()
{
	sample s1;
	s1.show();
	return 0;
}