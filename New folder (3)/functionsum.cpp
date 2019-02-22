#include<iostream>
using namespace std;
int sum(int x,int y,int z=0,int w=0)
{
	return(x+y+z+w);
}
int main()
{
	int a,b,c;
	a=sum(10,20);
	cout<<"sum:"<<a<<endl;
	b=sum(10,20,30);
	cout<<"sum:"<<b<<endl;
	c=sum(10,20,30,40);
	cout<<"sum:"<<c<<endl;
}
