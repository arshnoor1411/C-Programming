#include<iostream>
using namespace std;
class A
{
	public:
		void showa()
		{
			cout<<"\nYou are in class A";
		}
};
class B:public virtual A
{
	public:
		void showb()
		{
			cout<<"\nYou are in class B";
		}
};
class C:virtual public A
{
	public:
		void showc()
		{
			cout<<"You are in class C";
		}
};
class D:public B,public C
{
	public:
		void showd()
		{
			cout<<"\nYou are in class D";
		}
};
int main()
{
	D d;
	d.showa();
//	d.B::showa();
	return 0;
}
