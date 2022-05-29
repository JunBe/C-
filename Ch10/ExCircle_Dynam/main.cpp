#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	//사용자에게 몇 개의 Circle을 만들지 물어본다.
	//사용자에게 각 Circle의 Radius를 물어서 저장한다
	//Circle의 면적이 100과 200사이인 Circle의 개수를 출력한다.
	Circle obj1(5);
	obj1.ShowYourself();
	cout << "&obj1: " << &obj1 << endl;
	int n,r;
	cout << "몇 개의 Circle을 만들 것인가? ";
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
		cout << i+1 << "th Circle 면적: " << (p + i)->getArea()<<endl;
		if ((p + i)->getArea() >= 100 && (p + i)->getArea() <= 200) count++;
	}
	cout << "100과 200사이의 Circle 개수는 : " << count << endl;
	return 0;
}
