//***tell day of weeks***
#include<iostream>
using namespace std;
class Weekday{
	private:
		int n;
	public:
	void day()
{
		cout<<"Enter Number of a Weekday:";
			cin>>n;
            switch(n)
			{
              case 1:
                 cout<<"Friday";
                 break;
              case 2:
                 cout<<"Saturday";
                 break;
              case 3:
                 cout<<"Sunday";
                 break;
              case 4:
                 cout<<"Monday";
                 break;
              case 5:
                 cout<<"Tuesday";
                 break;
              case 6:
                 cout<<"Wednesday";
                 break;
              case 7:
                 cout<<"Thursday";
                 break;
              default:
                 cout<<"InValid Number";
                  }
   }
};

int main(){
 Weekday d;
 d.day();


return 0;

}