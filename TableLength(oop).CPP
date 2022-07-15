#include<iostream>
using namespace std;
class Table{
	private:
		int tab,len,c;
	public:
		void in()
		{
		 cout<<"Enter Number of Table: "<<endl;
	   	 cin>>tab;
         cout<<"Enter Length of Table: "<<endl;
		 cin>>len;
		}
		void calculate()
		{ for(c=1;c<=len;c++)
          cout<<tab<<"*"<<c<<"="<<tab*c<<endl;
		}
	 
};

int main(){
	Table t;
	t.in();
	t.calculate();

 return 0;
}