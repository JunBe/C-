#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "GeometricObject.h"
class Rectangle : public GeometricObject {
private:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double width, double height);
	Rectangle(double width, double height,const string& color, int x, int y);
	Rectangle(const Rectangle& obj);
	~Rectangle();
	double getWidth() const;
	void setWidth(double width);
	double getHeight() const;
	void setHeight(double height);
	double getArea() const;
	double getPerimeter() const;
	string toString() const;
	void Draw();

};
#endif