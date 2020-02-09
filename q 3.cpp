/* Write a program to print fibonacci series upto n */
#include<iostream>
using namespace std;

class fib
{
  public:
    int n,a,b,c;
	
	void get_n()
	{
	   cout<<"Enter the number of terms in fibonnaci series"<<endl;
	   cin>>n;	
	}	
	void getfib();
	
};
void fib :: getfib()
{
	a=0; b=1;int i;
	cout<<"Fibonnci Series"<<endl;
	cout<<a<<"\t"<<b;
	
	for(i=0;i<=n-2;i++)
	{
		c= a+b;
		cout<<"\t"<<c;
		a=b;
		b=c;
	}
}
int main()
{
	fib obj;
	obj.get_n();
	obj.getfib();
}
