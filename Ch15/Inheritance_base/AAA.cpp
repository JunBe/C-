#include <iostream>
#include "AAA.h"
using namespace std;
AAA::AAA() {
	cout << "AAA ���� ���� ������" << endl;
	pri = 0; pro = 0; pub = 0;
}
AAA::AAA(int i, int j, int k) {
	cout << "AAA ���� �ִ� ������" << endl;
	pri = i; pro = j; pub = k;
}
AAA::~AAA() {
	cout << "AAA �Ҹ���" << endl;
}
void AAA::Print() {
	cout << "pri pro pub : " << pri << " " << pro << " " << pub << endl;
}