#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
		test(int x,int y)
		{
			a=x;
			b=y;
		cout<<a+b;
}
};
test::test(double x,double y)
{
	//int a;
	cout<<x+y;
}
int main()
{
	int a,b;
	cin>>a>>b;
	test(a,b);
}
