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
	cout << "�Ϲ��� upcasting between Objects" << endl;
	g = c;
	g.Draw();
	cout << "�Ϲ��� upcasting between Pointers" << endl;
	GeometricObject* bp = &g;
	Circle* dp = &c;
	bp = dp;//���������� Ȱ�� ��
	bp->Draw();
	cout << "����� downcasting between Pointers" << endl;
	bp = &g;
	//dp=bp; �Ϲ��� downcasting�� ������ ������ ����
	dp = (Circle*)bp; // �����Ϸ��� ���� ����� �ȵ� ���� ����
	dp -> Draw();
	return 0;
}

void func(GeometricObject g) {
	cout << endl;
	cout << "in func() " << endl;
	g.Draw();
}