//convert degree to radian
#include<iostream>
#include<iomanip>
using namespace std;
const double PI=3.141593;
class Degree{
	private:
		int degrees=0;
        double radians;
    public:
    	void radian()
		{ 
		cout.setf(ios::fixed);
        cout.precision(6);
        cout<<"Degrees to Radians \n";
        while(degrees<=360)
	    	{
        radians=degrees*PI/180;
        cout<<setw(6)<<degrees<<setw(10)<<radians<<endl;
        degrees+=10;
            }
    		
		}
		
};

int main(){
    Degree r;
	r.radian();

  
return 0;
}