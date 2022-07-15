//reverse of number
#include <iostream>
using namespace std;
class ReverseOfNumber{
	private:
		long int n,num,digit,rev=0;
	public:
		void in()
		{
		  cout<<"Enter a Positive Number:";
		  cin>>num;
		}
		int reverse() 
		{
			n=num;
            do {
            digit=num%10;
            rev=(rev*10)+digit;
            num=num/10;
               }
           while(num!=0);
           return rev;
           
			}
		void palindrome()
		{
			 if(n==rev)
	         cout<<"The Number is Palindrome.";
         	 else
	         cout<<"The Number is not Palindrome.";
		}
		
    };

 int main()
{ long int r;
 ReverseOfNumber n;
 n.in();
 r=n.reverse();
 cout<<"the reverse of number is "<<r<<endl;
 n.palindrome();



return 0;
}
/*cout<<"Enter a Positive Number:";	cin>>num;
n=num;
do {
digit=num%10;
rev=(rev*10)+digit;
num=num/10;
}
while(num!=0);
cout<<"The reverse of the number is:"<<rev<<endl;
	if(n==rev)
	  cout<<"The Number is Palindrome.";
	else
	  cout<<"The Number is not Palindrome.";*/
