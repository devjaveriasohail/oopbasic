#include<iostream>
using namespace std;
class Increment
{
	private:
	int a,b,x,y;
	public:
		void in(){
			cout<<"Enter the value of a:"<<endl;
			cin>>a;
			cout<<"Enter the value of x:"<<endl;
			cin>>x;}
	   void inc(){
	   	b=y=0;
        b=a++;
        y=++x;
        cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	   }
};
int main()
{
		int a;
	Increment m;
	m.in();
	m.inc();
	
	return 0;}