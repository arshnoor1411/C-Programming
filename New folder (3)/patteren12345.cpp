#include<iostream>
using namespace std;
int main()
{
		int r,c,n;
	cout<<"Enter Number=";
	cin>>n;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		cout<<c;
		{
			cout<<endl;
		}
		
	}
	for(r=n-1;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		cout<<c;
		{
		cout<<endl;
		}
	}
	return 0;

}
