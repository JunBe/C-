#include <iostream>
#include "GeometricObject.h"
using namespace std;

GeometricObject::GeometricObject() {
	cout << "Geo Constructor without arg" << endl;
	color = "white";
	filled = false;
	x = 0; y = 0;
}
GeometricObject::GeometricObject(const string& color, int _x, int _y) {
	cout << "Geo Constructor with arg" << endl;
	this->color = color;
	x = _x; y = _y;
}
GeometricObject::GeometricObject(const GeometricObject& g) {
	cout << "Geo Copy Constructor" << endl;
	this->color = g.color;
	x = g.x; y = g.y;
}
GeometricObject::~GeometricObject() {
	cout << "Geo Deconstructor " << endl;
}
string GeometricObject::getColor() const {
	return color;
}
void GeometricObject::setColor(const string& color) {
	this->color = color;
}
bool GeometricObject::isFilled() const {
	return filled;
}
void GeometricObject::setFilled(bool filled) {
	this->filled = filled;
}
int GeometricObject::getX() const {
	return x;
}
void GeometricObject::setX(int _x) {
	x = _x;
}
int GeometricObject::getY() const {
	return y;
}
void GeometricObject::setY(int _y) {
	y = _y;
}
string GeometricObject::toString() const {
	return "Geometric Object";
}
void GeometricObject::Draw() {
	cout << "[Geo] Position = (" << x << ", "
		<< y << ") Color = " << color << endl;
}