#include<iostream>
using namespace std;
class A
{
	public:
		showa()
		{
			cout<<"You are in class A";
		}
};
class B
{
	public:
		showb()
		{
			//showa();
			cout<<"\nYou are in class B";
		}
};
class C:public B,public A
{
	public:
		showc()
		{
			cout<<"\nYou are in class C";
		}
};
int main()
{
	C c;
	//c.showa();
	//c.showb();
	c.showc();
}
