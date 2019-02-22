#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
	public:
		showa()
		{
			cout<<"You are in Class A";
		}
};
class B:public A
{
	public:
		showb()
		{
			showa();
			cout<<"\nYou are in Class B";
		}
};
/*class C:public B,public A
{
	public:
		showc()
		{
			cout<<"\nYou are in Class C";
		}
};*/
int main()
{
	A a;
	B b;
//	C c;
	//c.showa();
	b.showb();
	//b.showc();
}
