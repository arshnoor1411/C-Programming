#include<iostream>
using namespace std;
int main()
{
	int a;
	int **x;
	cin>>a;
	*x=&a;
	cout<<x;
}
