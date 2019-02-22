#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	public:
	void get(int a,int b);
	complex add(complex c)
	{
		complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
	}
	complex sub(complex f)
	{
		if(img>f.img)
		{
		complex temp1;
		temp1.real=real-f.real;
		temp1.img=img-f.img;
		return temp1;
	}
	else
	{
		complex temp1;
		temp1.real=real-f.real;
		temp1.img=f.img-img;
		return temp1;
	}
}
	complex mul(complex g)
	{
		complex temp2;
		temp2.real=real*g.real;
		temp2.img=img*g.img;
		return temp2;
	}
	complex div(complex f)
	{
		complex temp3;
		temp3.real=real/f.real;
		temp3.img=img/f.img;
		return temp3;
	}
	void show();
};
void complex::get(int a,int b)
{
	real=a;
	img=b;
}
void complex::show()
	{
		cout<<"Complex number:"<<real<<"+i"<<img<<endl;
	}
int main()
{
	complex c1,c2,c3,c4,c5,c6;
	int a,b,c,d;
	cout<<"Enter first number:";
	cin>>a>>b;
	c1.get(a,b);
	//c1.show();
	cin>>c>>d;
	c2.get(c,d);
	//c2.show();
	c3=c1.add(c2);
	c3.show();
	c4=c1.sub(c2);
	c4.show();
    c5=c1.mul(c2);
	c5.show();
	c6=c1.div(c2);
	c6.show();
	return 0;
}
