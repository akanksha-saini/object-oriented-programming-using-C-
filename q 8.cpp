/* Write a program to swap two numbers: using call by value ,call by reference & pointer */

#include<iostream>
using namespace std;

class Swap
{
   public:
   	   
       void call_by_value(int x,int y)
	   {
	   	  int temp;
	   	  temp = x;
	   	  x=y;
	   	  y=temp;
	   	  cout<<"x = "<<x <<"   "<<"y = "<<y;
		}
		void call_by_ref(int *x,int *y)
		{
			int *temp;
			 *temp = *x;
	   	      *x = *y;
	   	      *y = *temp;
		   cout<<"x = "<< *x <<"   "<<"y = "<<*y;	
		}
			
};
int main()
{
	int n1,n2;
	Swap s1;
	cout<<"Enter 2 numbers ";
	cin>>n1>>n2;
	cout<<"\nSwapping through call by value : ";
	s1.call_by_value(n1,n2);
	cout<<"\nn1 = "<<n1<< "\tn2 = "<<n2;
	cout<<"\nSwapping through call by reference : ";
	s1.call_by_ref(&n1,&n2);
	cout<<"\nn1 = "<<n1<< "\tn2 = "<<n2;
	return 0;
}
