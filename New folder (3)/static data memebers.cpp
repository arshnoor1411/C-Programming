#include<iostream>
using namespace std;
class item
{
	int num;
	static int count;
	public:
	void get(int c)
	{
		num=c;
		count++;
	}
	void show()
	{
		cout<<"code:"<<num;
	}
	void dis()
   {
	cout<<endl;
	cout<<"count:"<<count;
	cout<<endl;
	}
};
int item::count=10;
int main()
{
	item i1,i2,i3;
	int a,b;
	cin>>a>>b;
	i1.get(a);
	i1.show();
	i1.dis();
	i2.get(b);
	i2.show();
    i2.dis();
}
