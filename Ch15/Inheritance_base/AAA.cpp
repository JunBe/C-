#include <iostream>
#include "AAA.h"
using namespace std;
AAA::AAA() {
	cout << "AAA 인자 없는 생성자" << endl;
	pri = 0; pro = 0; pub = 0;
}
AAA::AAA(int i, int j, int k) {
	cout << "AAA 인자 있는 생성자" << endl;
	pri = i; pro = j; pub = k;
}
AAA::~AAA() {
	cout << "AAA 소멸자" << endl;
}
void AAA::Print() {
	cout << "pri pro pub : " << pri << " " << pro << " " << pub << endl;
}