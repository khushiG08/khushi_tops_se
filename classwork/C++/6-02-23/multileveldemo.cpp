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

class C : public B
{
	public :
		int c;
		void getC(int z)
		{
			c=z;
		}
		void showC()
		{
			cout<<"\nC ="<<c;
		}
		
};

int main()
{
	C b;
	int a,b1,c;
	cout<<"Enter A =";
	cin>>a;
	cout<<"Enter B =";
	cin>>b1;
	cout<<"Enter C =";
	cin>>c;
	b.getA(a);
	b.showA();
	b.getB(b1);
	b.showB();
	b.getC(c);
	b.showC();

};