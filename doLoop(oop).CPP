#include <iostream>
using namespace std;
class DoLoop{
	private:
	  int c;
	public:
		void in()
		{
			cout<<"Enter the value of highest value of c ";
			cin>>c;
			
		}
		void loop()
		{
			do {
            cout<<c<<endl;
            c=c-1;
            }
            while(c>=1); 
        }
		
};
int main()
{
DoLoop d;
d.in();
d.loop();

return 0;
}