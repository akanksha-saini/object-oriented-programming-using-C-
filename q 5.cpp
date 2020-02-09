/* Write a program to take two integer inputs and output their sum ,difference, product and division (quitient and remainder) as result based on a third input (operator).*/
#include<iostream>
#include<process.h>


using namespace std;
class calculator
{
	private:
		int a,b,res;char op;
	
	public:
	   void get_data()
	   {
	   	  cout<<"Enter two numbers:";
	   	  cin>>a>>b;
	   	
		}	
	   void cal()
	   {
	   	  cout<<"**MENU**"<<endl;
	   	  cout<<"1.Addition (+)\t2.Subtraction (-)\t3.Multiplication (*)\t4.Divison (/)\t5.Remainder (%)\n";
	   	  cout<<"Enter your choice (+,-,*,/,%)  ";
	   	 cin.ignore();
	   	 op = getchar();	  
	   	  switch(op)
	   	  {
	   	    case '+' : res=a+b;
	   	               break;
	   	    case '-' : res=a-b;
	   	               break;
	   	    case '*' : res=a*b;
	   	               break;
	   	    case '/' : res=a/b;
	   	               break;
	   	    case '%' : res=a%b;
	   	               break;
	   	               
			 default : cout<<"Wrong choice entered";
			           exit(-1);			   	
		  }
		  cout<< a<<" "<<op<<" "<<b<<" = "<<res;
	   }
};
int main()
{
	calculator obj;
	obj.get_data();
	obj.cal();
	return 0;
}
