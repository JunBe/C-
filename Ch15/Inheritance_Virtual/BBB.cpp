#include <iostream>
#include "BBB.h"
using namespace std;
BBB::BBB() {
	cout << "BBB ���� ���� ������" << endl;
	d = 0; name[0] = NULL;
}
BBB::BBB(int _d, const char* _name) {
	cout << "BBB ���� �ִ� ������" << endl;
	d = _d;
	strcpy_s(name, sizeof(name), _name);
}
BBB::~BBB() {
	cout << "BBB �Ҹ���" << endl;
}
void BBB::Print() {
	cout << "d name: " << d << " " << name << endl;
	cout << "pro : " << pro << endl;
	cout << "pub : " << pub << endl;
	//cout << "pri : " << pri << endl; // base�� �ִ� private�� ���� �Ұ�
}