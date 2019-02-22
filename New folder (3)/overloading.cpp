#include<iostream>
using namespace std;
void print(int c)
{
	cout<<c<<endl;
}
void print(float c)
{
	cout<<c<<endl;
}
void print(char c)
{
	cout<<c<<endl;
}
int main()
{
	int a;
	float b;
	char c;
	cin>>a;
	fflush(stdin);
	cin>>b;
	fflush(stdin);
	cin>>c;
	print(a);
	print(b);
	print(c);	
}
