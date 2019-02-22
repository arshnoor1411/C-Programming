#include<iostream>
using namespace std;
inline int cube(int i)
{
	return i*i*i; 
}
int main()
{
	int a;
	cin>>a;
	cube(a);
	cout<<cube(a);
}
