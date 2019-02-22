#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
		void get()
		{
			cin>>a;
			cin>>b;
		}
		void disp()
		{
			cout<<a<<b;
		}
		operator float()
		{
			return a/1000;
		}
};
int main()
{
	test t1;
	t1.get();
	int x;
	x=t1;
	cout<<x;
}
