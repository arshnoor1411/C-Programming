#include<iostream>
using namespace std;
int sum(int x,int y)
{
	return(x+y);
}
int main()
{
	int a,b;
	cout<<"Value of a:";
	cin>>a;
	cout<<"Value of b:";
	cin>>b;
	sum(a,b);
	cout<<"Value of a:"<<a<<endl;
	cout<<"Value of b:"<<b<<endl;
}
