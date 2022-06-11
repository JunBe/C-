#include <iostream>
#include "DerivedCircle.h"
using namespace std;
// Construct a default circle object
Circle::Circle()
	:GeometricObject()
{
	cout << "Circle Constructor without args" << endl;
	radius = 1;
}

// Construct a circle object with specified radius
Circle::Circle(double radius)
	:GeometricObject()
{
	cout << "Circle Constructor with arg, radius" << endl;
	setRadius(radius);
}

// Construct a circle object with specified radius,
//  color and filled values
Circle::Circle(double radius, const string& color, int x, int y) 
	:GeometricObject(color, x, y)
{
	cout << "Circle Constructor with args" << endl;
	setRadius(radius);
}

Circle::Circle(const Circle& c)
	: GeometricObject(c)
{
	cout << "Circle copy con" << endl;
	radius = c.radius;
}
Circle::~Circle() {
	cout << "Circle Deconstructor" << endl;
}
// Return the radius of this circle
double Circle::getRadius() const
{
	return radius;
}

// Set a new radius
void Circle::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

// Return the area of this circle
double Circle::getArea() const {
	return radius * radius * 3.14159;
}


// Return the perimeter of this circle
double Circle::getPerimeter() const
{
	return 2 * radius * 3.14159;
}

// Return the diameter of this circle
double Circle::getDiameter() const
{
	return 2 * radius;
}

// Redefine the toString function
string Circle::toString() const
{
	return "Circle object";
}

void Circle::Draw()
{
	cout << "[Circle] Position = ( " << x << ", " << y << ") ""Radius = " << radius << " Color " << color << endl;
}