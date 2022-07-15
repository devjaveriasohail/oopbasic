#include<iostream>
using namespace std;
class Math{
	private:
		int a,b;
	public:
		void in(){
			cout<<"enter first number"<<endl;
			cin>>a;
			cout<<"enter second number"<<endl;
			cin>>b;
		}
	   void math(){
	   	
cout<<"a+b="<<a+b<<endl;
cout<<"a-b="<<a-b<<endl;
cout<<"a*b="<<a*b<<endl;
cout<<"a/b="<<a/b<<endl;
cout<<"a%b="<<a%b<<endl;
	   	
	   }
};
int main(){
	Math c;
	c.in();
	c.math();
	return 0;


}