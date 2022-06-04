#include <iostream>
#include "DerivedCircle.h"
#include "DerivedRectangle.h"
#include "GeometricObject.h"
#include <string>
using namespace std;
void func(GeometricObject g);
int main() {
	Circle c(100,"blue", 50, 10);
	c.Draw();
	func(c);
	Rectangle r(10,20,"Yellow",100,200);
	r.Draw();
	func(r);
	GeometricObject g;
	cout << "암묵적 upcasting between Objects" << endl;
	g = c;
	g.Draw();
	cout << "암묵적 upcasting between Pointers" << endl;
	GeometricObject* bp = &g;
	Circle* dp = &c;
	bp = dp;//폴리몰피즘에 활용 됨
	bp->Draw();
	cout << "명시적 downcasting between Pointers" << endl;
	bp = &g;
	//dp=bp; 암묵적 downcasting은 컴파일 에러를 유발
	dp = (Circle*)bp; // 컴파일러에 따라 허용이 안될 수도 있음
	dp -> Draw();
	return 0;
}

void func(GeometricObject g) {
	cout << endl;
	cout << "in func() " << endl;
	g.Draw();
}