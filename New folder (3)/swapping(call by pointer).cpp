#include<iostream>
using namespace std;
float swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"Before Swapping:"<<endl;
	cout<<"Value of a:"<<a<<endl;
	cout<<"Value of b:"<<b<<endl;
	swap(&a,&b);
	cout<<"After Swapping:"<<endl;
	cout<<"Value of a:"<<a<<endl;
	cout<<"Value of b:"<<b<<endl;
}
