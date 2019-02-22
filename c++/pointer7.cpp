#include<iostream>
using namespace std;
int main()
{
	int a[5]={5,6,7,8,9};
	int *p;
	p=a;
	cout<<*++p<<endl;
	cout<<*p++<<endl;
	cout<<++*p;
}
