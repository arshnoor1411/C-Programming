#include<iostream>
using namespace std;
class item
{
    private:
	int num;
	float cost;
	public:
	void getinfo(int a,float b);
void getdata(int a,float b)
{
	num=a;
	cost=b;
}
void show()
{
	cout<<"Model NO."<<num<<endl;
	cout<<"Cost"<<cost<<endl;
}
};
int main()
{
	int c,d;
	item a,b;
	cout<<"Enter c";
	cin>>c;
	a.getdata(c,2.5);
	a.show();
	cout<<"Enter d";
	cin>>d;
	b.getdata(d,2.5);
	b.show();
}
