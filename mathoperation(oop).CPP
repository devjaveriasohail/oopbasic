
//number + operator*
#include<iostream>
using namespace std;
class Number{

  private:
   float a,b;
   char op;
   public:
   	void in(){
   cout<<"Enter a floating point number:";	
     cin>>a;
   cout<<"Enter an operator:";	       
     cin>>op;
   cout<<"Enter a floating point number:";	
     cin>>b;
switch(op){
 case '+':
      cout<<a+b<<endl;
   break;
 case '-':
      cout<<a-b<<endl;
   break;
 case '*':
      cout<<a*b<<endl;
   break;
 case '/':
   if(b==0)
      cout<<"Division by Zero!"<<endl;
   else
      cout<<a/b<<endl;
   break;
 default:
      cout<<"Invalid operator!"<<endl;
      }
  }
  };
      int main(){
      	Number o;
      	o.in();
	  
 return 0;
}