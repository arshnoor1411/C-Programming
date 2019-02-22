#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a,b,d;
	cin>>a;
	cin>>b;
	d=swap(a,b);
	cout<<"Value:"<<a<<endl;
		cout<<"Value:"<<b<<endl;
}
