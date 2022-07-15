#include<iostream>
using namespace std;
class Square{
	private:
		int h,w,a;
	public:
		void in(){
			cout<<"Enter the value of height:"<<endl;
			cin>>h;
			cout<<"Enter the value of width:"<<endl;
			cin>>w;
			
		}
		int area(){
			a=h*w;
			return a;
			
		}
};
int main(){
	int b;
	Square m;
	m.in();
	b=m.area();
	cout<<"Area of Square="<<b;
	
	return 0;
}

