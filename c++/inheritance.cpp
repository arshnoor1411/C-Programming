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
class B:public A
{
	public:
		showb()
		{
			cout<<"\nYou are in class B";
		}
};
int main()
{
	A a;
	B b;
	b.showa();
	b.showb();
}
