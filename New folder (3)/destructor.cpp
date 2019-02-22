#include<iostream>
using namespace std;
class test
{
	static int count;
	public:
		test()
		{
			count++;
			cout<<count<<"object created"<<endl;
		}
		~test()
		{
			cout<<count<<"object destoryed"<<endl;
			count--;
		}
};
int test::count;
int main()
{
	cout<<"------Main BLock------"<<endl;
	test t1;
	{
		cout<<"----Inner Block----"<<endl;
		test t2,t3;
		cout<<"-----Exit Inner block----"<<endl;
	}
	cout<<"---Exit Main Block----";
	return 0;
}
