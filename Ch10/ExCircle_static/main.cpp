#include <iostream>
#include "Circle.h"
using namespace std;
void printCircleByValue(Circle c);
void printCircleByRef(Circle &c);
void printCircleByPtr(Circle* cp);
int main() {
	Circle c1(5);
	cout << "1.num of Circle objs : " << Circle::getNumobjs() << endl; //1
	cout << "&c1: " <<&c1<<endl;
	printCircleByValue(c1);
	//1
	printCircleByRef(c1);//1
	cout << "4.num of Circle objs : " << Circle::getNumobjs() << endl;//1
	Circle c2(c1);//copy constructor
	cout << "5.num of Circle objs : " << Circle::getNumobjs() << endl;//2
	printCircleByPtr(&c1);
	return 0;
}
void printCircleByValue(Circle c) {
	cout << "&c: " << &c << endl;
	cout << "The area of the circle: " << c.getRadius() << endl;
	cout << "2.num of Circle objs : " << Circle::getNumobjs() << endl; //2
}
void printCircleByRef(Circle& c) { //새로운 객체가 만들어지지 않음
	cout << "&c: " << &c << endl;
	cout << "The area of the circle: " << c.getRadius() << endl;
	cout << "3.num of Circle objs : " << Circle::getNumobjs() << endl;//1
}
void printCircleByPtr(Circle* cp) { //새로운 객체가 만들어지지 않음
	cout << "&c: " << &cp << endl;
	cout << "The area of the circle: " << cp->getRadius() << endl;
	cout << "6.num of Circle objs : " << Circle::getNumobjs() << endl;//2
	//cout << "The area of the circle: " << (*cp).getRadius() << endl;
}