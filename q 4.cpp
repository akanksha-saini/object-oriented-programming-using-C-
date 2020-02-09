/* Write a program to read an employee 's imformation from the user and print the same.Employee's information shall include employee ID (int) ,employee name(string), employee salary (float) */
#include<iostream>
#include<string>
using namespace std;

class Employee
{
	public:
		int emp_id;
		string emp_name;
		float emp_sal;
		
		void get_data()
		{
			cout<<"Enter the employee id:";
			cin>>emp_id;
			cout<<"\nEnter the employee name:";
			cin.ignore();
		    getline(cin,emp_name);
			cout<<"\nEnter the employee salary:";
			cin>>emp_sal;
		}
		void put_data()
		{
			cout<<"**Employee details**"<<endl;
			cout<<" Id : "<<emp_id<<endl;
			cout<<" Name : "<<emp_name<<endl;
			cout<<" Salary : "<<emp_sal<<endl;	
		}
};
int main()
{
	Employee emp;
	emp.get_data();
	emp.put_data();
	return 0;
}
