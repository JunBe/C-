#include <iostream>
#include "AAA.h"
#include "BBB.h"
using namespace std;

int main() {
	cout << "sizeof(AAA) : " << sizeof(AAA) << endl; //AAA�� ��� ���� ������ ��
	cout << "sizeof(BBB) : " << sizeof(BBB) << endl; //AAA + BBB ��� ������ ������ �� (derived�̱� ������)
	AAA a1;
	a1.Print();
	AAA a2(10, 20, 30);
	a2.Print();
	/*cout << "a2.pri : " << a2.pri << endl; �Ұ�
	a2.pro = 2000;*/
	cout << "About BBB ��ü" << endl;
	BBB b1;
	b1.Print();
	BBB b2(100, "Alpha Go");
	b2.Print();
	//b2.d = 1000; private�̶� �Ұ�
	return 0;
}