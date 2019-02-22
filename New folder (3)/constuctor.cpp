#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex()
		{
			real=10;
			img=100;
			cout<<real<<"+"<<"i"<<img<<endl;
		}
		
        complex(int x,int y=10)
        {
	    real=x;
	    img=y;
	    cout<<real<<"*"<<"i"<<img<<endl;
        }
	/*	void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}*/
};
int main()
{
	complex c,d(4,9),a(2);
	return 0;
}
