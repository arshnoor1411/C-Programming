#include<iostream>
using namespace std;
int main()
{
	char n[10];
	int roll,n1,n2,n3,n4,n5,a,i,b;
	cout<<"Enter Name:";
		cin>>n;
		cout<<"Enter Roll No.:";
		cin>>roll;
		cout<<"A:";
		cin>>n1;
		cout<<"B:";
		cin>>n2;
		cout<<"C:";
		cin>>n3;
		cout<<"D:";
		cin>>n4;
		cout<<"E:";
		cin>>n5;
		b=(n1+n2+n3+n4+n5)/5;
		//cout<<b;
		cout<<"Percentage"<<endl<<b;
		if(b>=90)
		{
			cout<<"A";
		}
		if(b>=80)
		{
			cout<<"B";
		}
				if(b>=70)
		{
			cout<<"C";
		}
				if(b>=60)
		{
			cout<<"D";
		}
				if(b>=50)
		{
			cout<<"E";
		}
		if(b<40)
		{
			cout<<"Fail";
		}
}
