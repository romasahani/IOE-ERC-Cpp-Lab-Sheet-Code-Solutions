/*
Assume that an object represents an employee report that contains 
the information like employee id, total bonus, total overtime in a 
particular year. Use array of objects to represent nemployees' reports. 
Write a program that displays report. Use setpara() member

function to set report attributes by passing the arguments and member
 function displayreport() to show the reports according to parameter passed. 
 Display the report in following format.

Employee with ... ... ... has received Rs ... ... ...as bonus and

had worked ... ... ... hours as a over time in  year ... ... ...
*/


// header file for input and output operation
#include <iostream>
// using standard namespace
using namespace std;

//creating class of employee
class employee{
	private:
		int year;
		int id;
		float total_bonus;
		int overtime;
	
	public:
		void setpara(int id, float t, int h,int y){
			year=y;
			id=id;
			total_bonus=t;
			overtime=h;
		}
		
		void displayreport()
		{
			cout<<"An employee with "<<id<<"has received Rs "<<total_bonus
			<<"as a bonus and had worked "<<overtime
			<<"hours as overtime in the years "<<year;
		}
};


int main()
{
	int y,id,h, n;
	float t;
	cout<<"Enter the number of employee:"; cin>>n;
	cout<<"\nEnter the employee id:"; cin>>id;
	cout<<"\nEnter the total bonus:"; cin>>t;
	cout<<"\nEnter the over time hour:"; cin>>h;
	cout<<"\nEnter the year:"; cin>>y;
	
	employee e;
	for(int i=1; i<=n; i++)
	{
		e.setpara(id, t, h,y);
	}
		e.displayreport();
	return 0;
	
}

