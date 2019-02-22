#include<iostream>
using namespace std;
template <class C,class D>
D sum(C x,D y)
{
return x+y;
}
template <class C,class D>
C mul(C x,D y)
{
	return x*y;
}
int main()
{
	cout<<"Sum:"<<sum(4,5.5)<<endl;
	cout<<"Mul:"<<mul(5,5.5);
}
