#include<iostream>
using namespace std;
class WhileLoop{
	private:
	 int n;
	public:
		void loop()
		{ 
		n=1;
        while(n<=5)
		{
        cout<<n<<" "<<n*n<<endl;
        n++;
        }
			
		}
		
};
int main(){
	WhileLoop w;
	w.loop();



return 0;
}