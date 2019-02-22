#include<iostream>
using namespace std;
class comp
{
	int a;
	public:
		void get()
		{
		int x;
		cin>>x;
		a=x;
	}
void compare(comp c)
{
//	comp t;
	if(a==c.a)
	{
		cout<<"Both are equal";
	}
	else
	{
		cout<<"Not equal";
	}
}
void operator==(comp c)
{
//	comp t;
	if(a==c.a)
	{
		cout<<"Both are equal";
	}
	else
	{
		cout<<"Not equal";
	}
}
};
int main()
{
	comp t,t1;
	t.get();
	t1.get();
	t.compare(t1);
	t==t1;
	return 0;
}
