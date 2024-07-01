/*Create a class called carpark that has int data member for car id, 
int data member for charge/hour and float data member for time. 
Set the data and show the charges and parked hours of corresponding car id. 
Make two member functions for setting and showing the data.
 Member function should be called from other functions.*/

 // header file for input and output operation
#include <iostream>
// using standard namespace
using namespace std;
//creating class of carpark

class carpark{
	private:
		int car_id;
		int charge_hour;
		float time;
	
	public:
		void setdata(int id, int c_h, float t)
		{
			car_id=id;
			charge_hour=c_h;
			time=t;
			
		}
		
		void showdata()
		{
			cout<<" \n The detail of car is:";
			cout<<"Car Id: "<<car_id<<endl;
			cout<<"Charge/hour: "<<charge_hour<<endl;
			cout<<"Parked time: "<<time<<endl;
		}
};

void outfunction()
{
	int id, c_h;
	float t;
	
	cout<<"Enter the car id: ";
	cin>>id;
	cout<<" \n";
	cout<<"Enter the charges of car: ";
	cin>>c_h;
	cout<<" \n";
	cout<<"Enter the parking hour:  ";
	cin>>t;
	
	carpark c;
	c.setdata(id, c_h, t);
	c.showdata();
}

int main()
{

	outfunction();
	return 0;
}
