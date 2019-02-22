#include<iostream>
using namespace std;
int main()
{
	int a[5]={5,6,7,8,9};
	int *ptr,i;
	cout<<"Array Elements";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	ptr=a;
	cout<<ptr;
}
