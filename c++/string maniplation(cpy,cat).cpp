#include<iostream>
#include<string.h>
using namespace std;
class str
{
	char str[100];
	public:
		void read();
		void show();
		str operator+(str s);
};
void str::read()
{
	cin>>str;
}
void str::show()
{
	cout<<str;
}
str::str operator+(str s)
{
	str t;
	strcpy(t.str,str);
	strcat(t.str,s.str);
	return t;
}
int main()
{
	str a,b,c;
	a.read();
	b.read();
	c=a+b;
	c.show();
}
