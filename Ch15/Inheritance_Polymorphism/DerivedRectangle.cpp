#include <iostream>
#include "DerivedRectangle.h"
using namespace std;
// Construct a default rectangle object
Rectangle::Rectangle()
	:GeometricObject()
{
	cout << "Rect Constructor without args" << endl;
	width = 1;
	height = 1;
}

// Construct a rectangle object with specified width and height
Rectangle::Rectangle(double width, double height)
	:GeometricObject()
{
	cout << "Rect Constructor with args" << endl;
	setWidth(width); //this->width=width;
	setHeight(height);
}
Rectangle::Rectangle(double width, double height, const string& color, int x, int y) 
	:GeometricObject(color,x,y)
{
	cout << "Rect Constructor with args" << endl;
	setWidth(width);
	setHeight(height);
}

Rectangle::Rectangle(const Rectangle& r)
	: GeometricObject(r)
{
	cout << "Rect Copy con" << endl;
	width = r.width;
	height = r.height;
}
Rectangle::~Rectangle() {
	cout << "Rect Deconstructor" << endl;
}
// Return the width of this rectangle
double Rectangle::getWidth() const
{
	return width;
}

// Set a new radius
void Rectangle::setWidth(double width)
{
	this->width = (width >= 0) ? width : 0;
}

// Return the height of this rectangle
double Rectangle::getHeight() const
{
	return height;
}

// Set a new height
void Rectangle::setHeight(double height)
{
	this->height = (height >= 0) ? height : 0;
}

// Return the area of this rectangle
double Rectangle::getArea() const
{
	return width * height;
}

// Return the perimeter of this rectangle
double Rectangle::getPerimeter() const
{
	return 2 * (width + height);
}

// Redefine the toString function, to be covered in Section 15.5
string Rectangle::toString() const
{
	return "Rectangle object";
}

void Rectangle::Draw()
{
	cout << "[Rectangle] Position= ( "
		<< x << ", " << y << ") size = ( " << width << ", " << height << ") Color = " << color << endl;
}