#include<iostream>
using namespace std;
template <class B>
B sum(B a[],int size)
{
	int i;
	B s=0;
	for(i=0;i<size;i++)
	{
		s=s+a[i];
	}
	return s;
}
int main()
{
	int x[5]={1,2,3,4,5};
	float y[7]={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	cout<<"Integer"<<sum(x,5);
	cout<<"Float"<<sum(y,7);
	return 0;
}
