#include<iostream>
using namespace std;
class A;
class B
{
	int b;
	public:
	void get(int y)
	{
		b=y;
	}
	void disp()
	{
		cout<<"Class B:"<<b<<endl;
	}
	friend void sum(A,B);
};
class A

{
	int a;
	public:
		void get(int x)
		{
     	a=x;
		}
		void disp()
		{
			cout<<"Class A:"<<a<<endl;
		}
	 friend void sum(A,B);
};
void sum(A o1,B o2)
{
	cout<<o1.a+o2.b<<endl;
}
int main()
{
	A c;
	B d;0
	int a,b;
	cin>>a>>b;
	c.get(a);
	c.get(b);
	c.disp();
 	su m(c,d);
	return 0;
}
