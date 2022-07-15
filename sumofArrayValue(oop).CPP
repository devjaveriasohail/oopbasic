
#include<iostream>
using namespace std;
class Array{
	private:
		int arr[5],i,sum=0;
        float avg=0.0;
    public:
    	void loop()
		 {  for(i=0;i<5;i++){
		  cout<<"Enter Value:";
		  cin>>arr[i];
		    sum=sum+arr[i];
		    }
		   }
		int add()
		   {
		   return sum;
       	     }  
       	float average()
       	  { avg=sum/5.0;
       	 return avg;
		   }
	};
	int main()
	{
		int s,a;
		Array r;
		r.loop();
		s=r.add();
		cout<<"The sum is "<<s<<endl;
		a=r.average();
		cout<<"the average is "<<a<<endl;
	
		   	return 0;
	}
		
	