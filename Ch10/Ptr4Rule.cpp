#include <iostream>
using namespace std;
int main() {
	//1. �迭���� ����� �ε��� ǥ�� A[i] = i
	//2. �迭���� ����� ������ ǥ�� *(A+i) = i*i
	//3. �迭���� ������ ������ ������ ����� ������ ǥ�� *(p+i) = i*i*i
	//4. �迭���� ������ ������ ������ ����� �ε��� ǥ�� p[i]=i*i*i*i
	int A[10] = { 999 };
	int* p = A;
	cout << "1.�迭���� ����� �ε��� ǥ��" << endl;
	for (int i = 0; i < 10; i++) {
		A[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	cout << endl << endl;
	cout << "2. �迭���� ����� ������ ǥ��" << endl;
	for (int i = 0; i < 10; i++) {
		*(A + i) = i*i;
	}
	for (int i = 0; i < 10; i++) {
		cout << *(A + i) << " ";
	}
	cout << endl << endl;
	cout << "3. �迭���� ������ ������ ������ ����� ������ ǥ��" << endl;
	for (int i = 0; i < 10; i++) {
		*(p + i) = i * i * i;
	}
	for (int i = 0; i < 10; i++) {
		cout << *(p + i) << " ";
	}
	cout << endl << endl;
	cout << "4. �迭���� ������ ������ ������ ����� �ε��� ǥ��" << endl;
	for (int i = 0; i < 10; i++) {
		p[i] = i * i * i * i;
	}
	for (int i = 0; i < 10; i++) {
		cout << p[i] << " ";
	}
	cout << endl << endl;

	cout << "3-1. postincrement �������" << endl;
	for (int i = 0; i < 10; i++) {
		*(p++) = i * i * i;
	}
	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "3-2. preincerement �������" << endl;
	for (int i = 0; i < 10; i++) { //�迭 �ε��� �� �Ѿ ��Ÿ�� ����
		*(++p) = i * i * i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}