#include <iostream>
#include "Circle.h"
using namespace std;
void printCircleByValue(Circle c);
void printCircleByRef(Circle &c);
void printCircleByPtr(Circle* cp);
int main() {
	Circle c1(5);
	cout << "&c1: " <<&c1<<endl;
	Circle c2(c1);
	cout << "c2.getRadius() : " << c2.getRadius() << endl;
	printCircleByValue(c1); //copy constructor &
	printCircleByRef(c1);
	printCircleByPtr(&c1);
	return 0;
}
void printCircleByValue(Circle c) {
	cout << "&c: " << &c << endl;
	cout << "The area of the circle: " << c.getRadius() << endl;
}
void printCircleByRef(Circle& c) {
	cout << "&c: " << &c << endl;
	cout << "The area of the circle: " << c.getRadius() << endl;
}
void printCircleByPtr(Circle* cp) {
	cout << "&c: " << &cp << endl;
	cout << "The area of the circle: " << cp->getRadius() << endl;
	//cout << "The area of the circle: " << (*cp).getRadius() << endl;
}