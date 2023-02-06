#include<iostream>
using namespace std;

class Box{
	public:
		double width,double height,double depth;
		
	Box()
	{
		cout<<"\nDefualt Constructor called.";
		width = 4;
		depth = 5;
		height = 3;
	}
	
	Box(double w,double h,double,d)
	{
		cout <<"\n\nperameterized Constructor called.";
		width = w;
		depth = d;
		height = h;
	}
	void volume()
{
	cout<<"\nvolume of box="(width*height*depth);
}
};

























int main()
{
	Box b1;
	b1.volume();
	return 0;
}