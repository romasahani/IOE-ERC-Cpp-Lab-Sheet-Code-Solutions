/*Assume that you want to check whether the number is prime or not. 
Write a program that asks for a number repeatedly. 
When it finishes the calculation the program asks if the user wants 
to do another calculation. The response can be 'y' or 'n'. Don't forget to
 use the object class concept.*/

// header file for input and output operation
#include<iostream>
// using standard namespace
using namespace std;

/** Class that check the number is prime or composite
**/

 class IsPrime{
 	private:
 		int num;
 	
	public:
		void getnum(int n)
		{
			num=n;
		}
	
	void checkprime()
	{
		int count=0;
		
		for (int i=2; i<=num/2; i++)
		{
			if (num%i==0){
				count++;
				break;
			}
		}
		
		if (count==0){
			cout<<num<<" is prime number"<<endl;
		}
		
		else{
			cout<<num<<" is composite number"<<endl;
		}
			
	}
		
 };
 
 int main()
 {
 	IsPrime p;
 	int n;
 	char choice;
 	do
	 {
	 
 	   cout<<"Enter the number to check whether it is prime or composite :";
 	   cin>>n;
 	   p.getnum(n);
 	   p.checkprime();
 	   cout << "Do you want to continue y/n : ";
       cin >> choice;
    }
    while(choice == 'y');
 	return 0;
 }
