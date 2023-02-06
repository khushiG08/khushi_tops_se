# include<iostream>
using namespace std;

class A
{
	public:
		int a;
		void getA(int x)
		{
			a=x;
		}
		void showA()
		{
			cout<<"\nA ="<<a;
		}
};

class B : public A
{
	public :
		int b;
		void getB(int y)
		{
			b=y;
		}
		void showB()
		{
			cout<<"\nB ="<<b;
		}
	
};

int main()
{
	B b;
	int a,b1;
	cout<<"Enter value A =";
	cin>>a;
	cout<<"Enter value B =";
	cin>>b1;
	b.getA(a);
	b.showA();
	b.getB(b1);
	b.showB();



}