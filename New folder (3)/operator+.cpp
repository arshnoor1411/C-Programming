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
void operator+(comp c)
{
//	comp t;
cout<<a+c.a<<endl;
}
void operator-(comp c)
{
	cout<<a-c.a;
}
};
int main()
{
	comp t,t1;
	t.get();
	t1.get();
	//t.compare(t1);
	t+t1;
	t-t1;
	return 0;
}
