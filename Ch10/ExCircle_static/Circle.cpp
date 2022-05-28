#include <iostream> //cout�Ἥ �������
#include "Circle.h" //���� �ۼ��� ��������� ""
using namespace std; 
int Circle::numobjs = 0; //static member �ʱ�ȭ
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