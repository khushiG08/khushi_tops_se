#include<iostream>
using namespace std;

class side
{
	protected:
		double l;
		public : 
		void getval(int x)
		{
			l =x;
	    }
	
};
class squre :public side
{
 public:
 	int sqr()
 	{
 		return l*l;
 	}
};

class cube :public side
{
 public :
 	int cu()
 	{
 		return l*l*l;
 		
	 }
};


int main()
{
	int a,b;
	cout<<"\nEnter value for squre  =";
	cin>>a;	
	
	squre s1;
	s1.getval(a);
	cout<<"\nsqure is :"<<s1.sqr();
	
	cout<<"\nEnter value for cube  =";
	cin>>b;
	
	cube c1;
	c1.getval(b);
	cout<<"\ncube is :"<<c1.cu();
	
	return 0;
}