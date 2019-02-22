#include<iostream>
using namespace std;
class Test
{
	int x,y;
	public:
		Test(int x=0,int y=0)
		{
			this->x=x;
			this->y=y;
		}
		Test &setX(int a)
		{
			x=a;
			return *this;
		}
		Test &setY(int b)
		{
			y=b;
			return *this;
		}
		void show()
		{
			cout<<"\nX:"<<x;
			cout<<"\nY:"<<y;
		}
};
int main()
{
	Test a(5,10);
	int c,b;
	cin>>c>>b;
	a.show();
	a.setX(c).setY(b);
	a.show();
}
