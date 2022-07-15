//Check whether alphabet is vowel or not
#include <iostream>
using namespace std;
class Alphabet{
	private:
		char c;
	public:
	void in();
	void vowel();
	};
	void Alphabet::in(){
	     cout<<"Enter an alphabet:";
         cin>>c;
	}
	void Alphabet::vowel(){
		
		 switch(c){
	case 'a':
	case 'A':
	  cout<<"You entered vowel.";
	break;
	case 'e':
	case 'E':
	  cout<<"You entered vowel.";
	break;
	case 'i':
	case 'I':
	  cout<<"You entered vowel.";
	break;
	case 'o':
	case 'O':
	  cout<<"You entered vowel.";
	break;
	case 'u':
	case 'U':
	  cout<<"You entered vowel.";
	break;
      default:
       cout<<"Not Vowel.";
       }
		
	}
int main()
{
	Alphabet a;
	a.in();
	a.vowel();
 return 0;
}