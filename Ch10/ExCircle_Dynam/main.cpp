#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	//����ڿ��� �� ���� Circle�� ������ �����.
	//����ڿ��� �� Circle�� Radius�� ��� �����Ѵ�
	//Circle�� ������ 100�� 200������ Circle�� ������ ����Ѵ�.
	Circle obj1(5);
	obj1.ShowYourself();
	cout << "&obj1: " << &obj1 << endl;
	int n,r;
	cout << "�� ���� Circle�� ���� ���ΰ�? ";
	cin >> n;
	Circle* pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "Radius : ";
		cin >> r;
		(pArray + i)->setRadius(r);
		//(pArray + i)->ShowYourself();
		//cout << (pArray + i) << endl;
	}
	int count = 0;
	Circle* p = pArray;

	for (int i = 0; i < n; i++) {
		cout << i+1 << "th Circle ����: " << (p + i)->getArea()<<endl;
		if ((p + i)->getArea() >= 100 && (p + i)->getArea() <= 200) count++;
	}
	cout << "100�� 200������ Circle ������ : " << count << endl;
	return 0;
}
