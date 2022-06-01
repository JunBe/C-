#include <iostream>
#include "Point.h"
using namespace std;
Point::Point() {
	x = 0;
	y = 0;
	cout << "인자 없는 생성자" << endl;
}
Point::Point(int i, int j) {
	x = i;
	y = j;
	cout << "인자 있는 생성자" << endl;
}
Point::Point(const Point& p) {
	x = p.x;
	y = p.y;
	cout << "복사 생성자" << endl;
}
Point::~Point() {
	cout << "Deconstructor" << endl;
}
void Point::SetX(int i) {
	x = i;
}
int Point::getX() {
	return x;
}
void Point::SetY(int j) {
	y = j;
}
int Point::getY() {
	return y;
}
void Point::Print() {
	cout << "X : " << x << " Y : " << y << endl;
}