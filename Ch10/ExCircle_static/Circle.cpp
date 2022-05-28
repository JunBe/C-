#include <iostream> //cout써서 써줘야함
#include "Circle.h" //직접 작성한 헤더파일은 ""
using namespace std; 
int Circle::numobjs = 0; //static member 초기화
//class Circle implementation
Circle::Circle() {	//Constructor without arg
	cout << "Constructor without arg" << endl;
	radius = 1;
	numobjs++;
}
Circle::Circle(double r) {
	cout << "Constructor with arg" << endl;
	radius = r;	//constructor with arg
	numobjs++;
}
Circle::Circle(const Circle& obj) {
	cout << "Copy constructor" << endl;
	this->radius = obj.radius;
	numobjs++;
}

Circle::~Circle() {//deconstructor
	cout << "deconstructor" << endl;
	numobjs--;
}
double Circle::getArea() { //member function
	return radius * radius * 3.14;
}
double Circle::getRadius() {
	return radius;
}
void Circle::setRadius(double r) {
	radius= r;
}
int Circle::getNumobjs() {
	return numobjs;
}