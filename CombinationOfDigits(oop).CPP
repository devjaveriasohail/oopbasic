
#include<iostream>
using namespace std;
class Combination{
	private:
		int a,b,c;
	public:
		void in(){
			cout<<"Enter Three Digits:"<<endl;
				cin>>a>>b>>c;
			
		}
	   void op(){ 
	   if((a!=b) && (b!=c) && (c!=a)){
	  cout<<a<<b<<c<<"\t";
	  cout<<a<<c<<b<<"\t";
	  cout<<b<<a<<c<<"\t";
	  cout<<c<<a<<b<<"\t";
	  cout<<c<<b<<a;
  }
  else{
    if((a==b) && (a==c)){
	  cout<<a<<b<<c;
	  }
    else{
      if(a==b){
	  cout<<a<<b<<c<<"\t";
	  cout<<a<<c<<b<<"\t";
	  cout<<c<<b<<a<<"\t";
	  }
      else {
	if(a==c){
	  cout<<a<<c<<b<<"\t";
	  cout<<a<<b<<c<<"\t";
	  cout<<b<<a<<c<<"\t";
	  }
	else{
	  cout<<b<<c<<a<<"\t";
	  cout<<b<<a<<c<<"\t";
	  cout<<a<<b<<c<<"\t";
	   }
	 }
	}
       }
        }
   };
       
	   
int main(){
   Combination m;
	m.in();
	m.op();
return 0;
}