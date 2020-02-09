/* A perfect number is one whose divisors add up to the number. For example, 6 is a perfect number because 6 = 1 + 2 + 3. 
Write a program that prints all perfect numbers from 1 till 10,000*/

#include<iostream>
using namespace std;

class perf_no
{	
    public:
	   
	   
	   int is_perfect(long long n)
	   {
	        int i,sum=0;
		   for(i=1;i<n;i++)
	       {  
	           if(n% i ==0)
	           {
	              sum = sum + i;
	           }
	       }
	            if(sum==n)
	               return 1;
	           
	            else 
			     return 0;  
	        
	   }
	   
	   void print_perfect()
	   {  
	      int j;
	       cout<<"Perfect Square \n";
	      for(j=1;j<=10000;j++)
		  {   
		    
	         if( is_perfect(j))
	         {
	         	cout<<j<<"\t";
			 }
	       }
	      
       }	   	
};
int main()
{
	perf_no obj;
	obj.print_perfect();
	return 0;
}
