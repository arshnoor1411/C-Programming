#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int *ptr;
	int **ptr2=&a;
	*ptr=8;
	cout<<a<<endl;
	cout<<*ptr<<endl;
	cout<<&a<<endl;
	cout<<ptr<<endl;
	cout<<**ptr2;
}
