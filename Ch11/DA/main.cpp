#include <iostream>
#include "DA.h"
using namespace std;

int main() {
	DA obj1; // ���� ���� ������
	int size;
	cout << "�� ���� ������ �Է��ϰڼ� : ";
	cin >> size;
	DA obj2(size); // ���� �ִ� ������
	//����ڰ� ���ϴ� ������ �Է¹޴´�.
	for (int i = 0; i < size; i++) {
		cout << "�Է�: ";
		cin >> obj2.arr[i];
	}
	for (int i = size - 1; i >= 0; i--) {
		cout << obj2.arr[i] << " ";
	}
	cout << endl;
	DA A(obj2); //�Է°���
	for (int i = size - 1; i >= 0; i--) {
		cout << A.arr[i] << " ";
	}
	cout << endl;
	DA B(obj1); //4��
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