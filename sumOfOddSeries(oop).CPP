#include<iostream>
using namespace std;
class SumOfOddSeries{
	private:
		int sum=0,n;
	public:
		void in()
		{
		 cout<<"Enter a Number:";
		 cin>>n;
		}
		int odd()
		{
	     for(int i=1;i<=n;i++){
	     if(i%2==0)
	     continue;
	    sum=sum+i;}
		return sum;	
		}
		
};
int main(){
	int s;
	SumOfOddSeries o;
	o.in();
	s=o.odd();
	cout<<"The Sum is odd number till the given number is "<<s;
return 0;
	}