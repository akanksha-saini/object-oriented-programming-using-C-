/* Write a program to convert temperature in celsius to farenheit and vice versa */
#include<iostream>
using namespace std;

class conversion
{
	private:
		int ch ; float temp,res;
	public:	
	  void cal()
	  {
	  	
	  	cout<<"**MENU**";
	  	cout<<"\n1. Celsius to Farenheit\t 2. Farenheit to celsius";
	  	cout<<"\nEnter your choice";
	  	cin>>ch;
	  	cout<<"\nEnter temperature\n";
	  	cin>>temp;
	  	switch(ch)
	  	{
	  	  case 1 : 	res = ((9.0/5.0 ) * temp) + 32;
	  	            break;
	  	  case 2 : 	res = (5.0/9.0 ) * (temp - 32.0);
	  	            break;
	  	  default: cout<<"Wrong choice entered\n";
			                 
		}
		cout<< "\nTemperature = "<<res;
	  }
};

int main()
{
	conversion obj;
	obj.cal();
	return 0;
}
