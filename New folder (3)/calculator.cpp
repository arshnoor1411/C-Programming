#include<iostream>
using namespace std;
class calculation
{
	int a,b;
	public:
		calculator(int x,int y)
		{
			a=x;
			b=y;
			cout<<a+b<<endl;
		}
		calculator(float x,float y)
		{
			a=x;
			b=y;
			cout<<a-b<<endl;
		}
		calculator(double x,double y)
		{
			a=x;
			b=y;
			cout<<a*b<<endl;
		}		
		calculator(long int x,long int y)
		{
			a=x;
			b=y;
			cout<<a/b<<endl;
		}
};
//calculation
int main()
{
	calculation c;
	//int a,b;
//	double e,d;
	//cin>>a>>b;
//	cin>>e>>d;
//    c.calculator(a,b);
        c.calculator(2.5,2.5);
}
