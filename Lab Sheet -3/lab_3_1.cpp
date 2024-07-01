/*Write a simple program that convert the temperature in degree Celsius 
to degree Fahrenheit and vice versa using the basic concept of class and
 object. Make separate class for Centigrade and Fahrenheit which will 
 have the private member to hold the temperature value and make conversion 
 functions in each class for conversion from one to other. For example you 
 will have function toFahrenheit() in class Celsius that converts to Fahrenheit
scale and returns the value.*/

#include<iostream>
using namespace std;

/**
  Centigrade class that store centigrade values and convert it into ferhenhiet
 **/
class Celcius{
	private:
		float temp;
	
	public:
		Celcius(float t)
		{
			temp=t;
		}
		
		
		float toFarhenheit()
		{
			return (temp)/100*180+32;
		}			
};

/**
 * Farhenheit class that store farhenheit values and convert it into celcius
 **/ 

class Farhenheit{
	private:
		float temp;
	public:
		
	Farhenheit(float t)
	{
		temp=t;
	}
	
	float toCelcius()
	{
		return (temp-32)/180*100;
	}
	
};

int main()
{
  float temp;
  int choice;
  cout << "Select temperature unit to change into another"<< endl;
  cout << "1. Celcius" << endl;
  cout << "2. Farhenheit" << endl;
  cin >> choice;
  if (choice == 1)
    {
      cout << "Enter temperature in celcius" << endl;
      cin >> temp;
      Celcius C(temp);
      cout << "temperature in Farhenheit " << C.toFarhenheit();
      
    }
  else if (choice == 2) 
    {
      cout << "Enter temperature in Farhenheit " << endl;
      cin >> temp;
      Farhenheit F(temp);
      cout << "temperature in Celcius " << F.toCelcius();
      
    } 
   return 0;
}

