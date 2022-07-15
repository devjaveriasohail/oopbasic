
#include<iostream>
using namespace std;
class FactorOfNumber{
	private:
	 int n,i,j,s=1;
	public:
	void in()
	{ 
	 cout<<"\nEnter a Number:";
	 cin>>n;
	}
	void factor()
	{
	 cout<<"\nProduct Components of "<<n<<" are\n";
     for(i=n;i>=s;i--)
	 for(j=1;j<=n;j++){
	 if(i*j==n){
	 cout<<i<<"*"<<j<<endl;
	 s=j+1;
	     }
      }
	}	
};
int main(){
FactorOfNumber f;
f.in();
f.factor();

return 0;
}