#include<iostream>
using namespace std;
class student
{
	char name[20];
	public:
		friend class details;
};
class details
{
	char branch[10];
	float marks;
	public:
		student s;
		display d;
		void get()
		{
			cin>>s.name>>branch>>marks;
		}
		void display()
		{
			cout<<branch<<marks<<s.name;
		}
};
int main()
{
	details d;
	d.get();
	d.display();
}
