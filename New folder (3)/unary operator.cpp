#include<iostream>
using namespace std;
class sub
{
	int a,b,c;
	public:
		void get();
		void operator-();
};
void sub::get()
{
	int x,y,z;
	cin>>x>>y>>z;
	a=x;
	b=y;
	c=z;
}
void sub::operator-()
{
	a=a+1;
	b=b+2;
	c=c+3;
	cout<<"value of A:"<<a<<endl;
	cout<<"value of b:"<<b<<endl;
	cout<<"value of c:"<<c<<endl;
}
int main()
{
	sub s;
	s.get();
	-s;
	return 0;
}
