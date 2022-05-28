#include <iostream>
#include "Circle.h"
using namespace std;
//클라이언트
void printCircleByValue(Circle c);
void printCircleByRef(Circle &c);
void printCircleByPtr(Circle* cp);
//시그니쳐가 같다
int main() {
	Circle c1(5);
	cout << "&c1: " <<&c1<<endl;
	printCircleByValue(c1);
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