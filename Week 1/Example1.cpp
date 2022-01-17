#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
public:
	// Constructors
	Circle() //Default constructor - no arguments
	{
		radius = 10;
	}
	Circle(double r) //Constructor - has arguments
	{
		radius = r;
	}
	Circle(double r, double s) //Constructor - has arguments
	{
		radius = r;
		s = scale;
	}

	// Behaviours (functions)

	void setRadius(double);
	double getRadius() { return radius; }
	double calcArea()
	{
		// Area of a circle is PI*r^2
		return 314 * pow(radius, 2);
	}

	// Properties (variables)
private:
	double radius, scale;
};

void Circle::setRadius(double r)
{
	if (r > 0)
	{
		radius = r;
	}
	else
	{
		cout << "Enter a number greater than 0!\n";
	}
}

//int main()
//{
//	Circle circle1, circle2(2.5);
//
//	circle1.setRadius(1);
//	//circle2.setRadius(2.5);
//
//	//Print out the area
//	cout << "The area of circle 1 is " << circle1.calcArea() << "\n" << endl;
//	cout << "The area of circle 2 is " << circle2.calcArea() << "\n" << endl;
//
//	return 0;
//}