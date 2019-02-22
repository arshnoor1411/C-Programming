#include<iostream>
using namespace std;
class A
{
	int a,b,c;
	public:
		void get(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void show()
		{
			cout<<a<<endl<<b<<endl<<c;
		}
};
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	A j;
	j.get(a,b,c);
	j.show();
	return 0;
}
