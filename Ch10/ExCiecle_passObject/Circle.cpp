#include <iostream> //cout써서 써줘야함
#include "Circle.h" //직접 작성한 헤더파일은 ""
using namespace std; 
//class Circle implementation
Circle::Circle() {	//Constructor without arg
	cout << "Constructor without arg" << endl;
	radius = 1;
}
Circle::Circle(double r) {
	cout << "Constructor with arg" << endl;
	radius = r;	//constructor with arg
}
Circle::~Circle() {//deconstructor
	cout << "deconstructor" << endl;
}
double Circle::getArea() { //member function
	return radius * radius * 3.14;
	;
}
double Circle::getRadius() {
	return radius;
}
void Circle::setRadius(double r) {
	radius= r;
}