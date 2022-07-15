#include<iostream>
#include<iomanip>
using namespace std;
class TemperatureConversion{
	private:
		int n;
        float c;
    public:
    	void in()
		{ 
		cout<<"Enter the temperature in fahrenheit "<<endl;
        cin>>n;
			}
    	void celsius()
    	{
		c=5.0/9.0*(n-32);	
        cout<<"The temperature in celsius is ";
        cout<<setprecision(4)<<c;
		}
		
};
int  main() {
	
	TemperatureConversion t;
t.in();
t.celsius();
	
return 0;
}