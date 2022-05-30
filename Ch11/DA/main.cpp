#include <iostream>
#include "DA.h"
using namespace std;

int main() {
	DA obj1; // 인자 없는 생성자
	int size;
	cout << "몇 개의 정수를 입력하겠소 : ";
	cin >> size;
	DA obj2(size); // 인자 있는 생성자
	//사용자가 원하는 정수를 입력받는다.
	for (int i = 0; i < size; i++) {
		cout << "입력: ";
		cin >> obj2.arr[i];
	}
	for (int i = size - 1; i >= 0; i--) {
		cout << obj2.arr[i] << " ";
	}
	cout << endl;
	DA A(obj2); //입력개수
	for (int i = size - 1; i >= 0; i--) {
		cout << A.arr[i] << " ";
	}
	cout << endl;
	DA B(obj1); //4개
	for (int i = size - 1; i >= 0; i--) {
		cout <<B.arr[i] << " ";
	}
	cout << endl;
	B = A; //B.operator=(A); 
	for (int i = size - 1; i >= 0; i--) {
		cout << B.arr[i] << " ";
	}
	return 0;
}