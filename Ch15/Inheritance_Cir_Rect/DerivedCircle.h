#ifndef CIRCLE_H
#define CIRCLE_H
#include "GeometricObject.h"

class Circle : public GeometricObject {
public:
	Circle();
	Circle(double radius); 
	Circle(double radius, const string& color, int x, int y);
	Circle(const Circle& obj);
	~Circle();
	double getRadius() const;
	void setRadius(double radius);
	double getArea() const;
	double getPerimeter() const;
	double getDiameter() const;
	string toString() const;
	void Draw();
private:
	double radius;

};

#endif