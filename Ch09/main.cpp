#include <iostream>
#include "Circle.h"
using namespace std;
int main() {
	cout << "sizeof(Circle): " << sizeof(Circle)<<endl;
	Circle c1;
	cout<<"sizeof(c1): "<<sizeof(c1)<<endl;
	cout << "c1.getArea(): " << c1.getArea() << endl;
	Circle c2(7.5);
	cout << "c2.getArea(): " << c2.getArea() << endl;
	//cout << c1.radius;
	c1.setRadius(40);
	cout << c1.getRadius() << endl;
	//c1.radius = 50; private 때문에 사용할 수 없음
	return 0;
}