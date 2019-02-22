#include<iostream>
using namespace std;
class A;
class B
{
	int r,m;
	public:
		B(int x,int y)
		{
			r=x;
			m=y;
		}
friend void operator+(A t1,B t2);
};
class A
{
	int real,img;
	public:
		A(int x,int y)
		{
			real=x;
			img=y;
		}
friend void operator+(A t1,B t2)
{
	cout<<t1.real+t2.r<<"+"<<"i";
	cout<<t1.img+t2.m;
}
};
int main()
{
	A a(1,2);
	B b(2,3);
	a+b;
	return 0;
}
