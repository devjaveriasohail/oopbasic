#include<iostream>
using namespace std;
class Triangle
{
	private:
		char ch='A';
        int n,i,j;
    public:
    	void in()
    	{ 
		 cout<<"\nEnter the height of Triangle:";	
		 cin>>n;
		}
		void tri()
		{
			for(i=1;i<=n;i++){
            for(j=1;j<=i;j++)
           {
            cout<<ch<<" ";
            ch++;
           }
          cout<<"\n";
        }
		}
		
	
};
int main()
{ Triangle t;
 t.in();
 t.tri();
	
  return 0;
}