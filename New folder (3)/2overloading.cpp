#include<iostream>
using namespace std;
int area(float c)
{
	return 3.14*c*c;
}
int area(int *b,int *c)
{
	return *b**c;
}
int main()
{
	int d,g,a,e,f;
	float b;
	cin>>a;
	cin>>e;
	b=area(a);
	d=area(&a,&e);
	cout<<"Area:"<<b<<endl;
	cout<<"Area:"<<d<<endl;
}
