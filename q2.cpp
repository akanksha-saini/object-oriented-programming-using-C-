/* program to calculate factorial of a number entered by user*/

#include<iostream>
using namespace std;
class getfactorial
{
	public:
	     int fact,n;
	     
	     
	    void get_number()
	    {
	    	cout<<"\nEnter the number\n";
	    	cin>>n;
		}
	    void factorial()
	    {
	    	 fact=1;
	       while(n>0)
		   {
		   	 fact = fact * n;
		   	 n--;
		   	
			}
				cout<<"Factorial :"<< fact;	
		}
};

int main()
{
	getfactorial obj;
	 obj.get_number();
     obj.factorial();
	 return 0;
}
