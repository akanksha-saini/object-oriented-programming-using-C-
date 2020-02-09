/*Write a program that calculates area and perimeter of the following geometric figures. 
Your program should use function overloading and each function should take as inputs the required arguments (without constraining the user) and return both area and perimeter. 
a. Square  b. Rectangle */

#include<iostream>
using namespace std;
class cal
{
	public:
		  
		  void area(int s)
		  {
		  	  cout<<"\nArea of Square : "<<s*s;
		  }
		  
		  void area(int l,int b)
		  {
		  	  cout<<"\nArea of Rectangle: "<<l*b;
		  }
		  void perimeter(int s)
		  {
		  	 cout<<"\nPerimeter of Square : "<<4*s;
		  }
		  void perimeter(int l,int b)
		  {
		  	 cout<<"\nPerimeter of Rectangle : "<<2*(l+b);
		  }		 		  
};
int main()
{
	int s,l,b;
	cal sq,rec;
	cout<<"\nEnter the side of square ";
	cin>>s;
	sq.area(s);
	sq.perimeter(s);
	cout<<"\nEnter the length and breadth of rectangle ";
	cin>>l>>b;
	rec.area(l,b);
	rec.perimeter(l,b);
	return 0;
}

