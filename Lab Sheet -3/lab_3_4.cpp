/*Write a program with classes to represent circle,
 rectangle and triangle. Each classes should have data members 
 to represent the actual objects and member functions to read and display 
 objects, find perimeter and area of the objects and other useful functions.
  Use the classes to create objects in your program.*/

 // header file for input and output operation
#include <iostream>
// using standard namespace
using namespace std;
//creating class of geometry

class circle{
	private:
		float radius;
	
	public:
		void read(float r)
		{
			radius=r;	
		}
		
		void display()
		{
		    cout<<"\n\n For circle";
			float Area=3.14*radius*radius;
			cout<<"\nThe area of circle is "<<Area;
			
			float perimeter= 2*3.14*radius;
			cout<<"\nThe perimeter of circle is "<<perimeter;	
		}
};

class rectangle{
	private:
		float length, breadth;
	
	public:
		void read(float l, float b)
		{
			length=l;
			breadth=b;	
		}
		
		void display()
		{
			cout<<"\n\n For rectangle";
			float Area=length*breadth;
			cout<<"\nThe area of rectangle is "<<Area;
			
			float perimeter= 2*(length+breadth);
			cout<<"\nThe perimeter of rectangle is "<<perimeter;
		}
};

class triangle{
	private:
		float base, height;
	
	public:
		void read(float ba, float h)
		{
			base=ba;
			height=h;	
		}
		
		void display()
		{
			cout<<"\n \n For triangle";
			float Area=(base*height)/2;
			cout<<"\nThe area of triangle is "<<Area;
			
			float perimeter= base+height;
			cout<<"\nThe perimeter of triangle is "<<perimeter;
		}
};



int main()
{   float r, l, b,ba,h;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    cout<<"\n Enter the length and breadth of rectangle: ";
    cin>>l>>b;
    cout<<"\n Enter the base and heigth of triangle: ";
    cin>>ba>>h;
    
    circle c;
    c.read(r);
    c.display();
    
    rectangle rec;
    rec.read(l,b);
    rec.display();
    
    triangle t;
    t.read(ba,h);
    t.display();
    
	return 0;
}
