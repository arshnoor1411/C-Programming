#include<iostream>
using namespace std;
class computer
{
	int a,b;
	public:
	void get()
	{
		cin>>a>>b;
	}
	friend class computer1;
};
class computer1
{
	public:
	void display(computer c)
	{
		cout<<c.a<<endl<<c.b;
	}
};
int main()
{
computer a;
computer1 b;
a.get();
b.display(a);
}
