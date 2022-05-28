#include <iostream>
using namespace std;
int main() {
	//1. 배열명을 사용한 인덱스 표현 A[i] = i
	//2. 배열명을 사용한 포인터 표현 *(A+i) = i*i
	//3. 배열명을 저장한 포인터 변수를 사용한 포인터 표현 *(p+i) = i*i*i
	//4. 배열명을 저장한 포인터 변수를 사용한 인덱스 표현 p[i]=i*i*i*i
	int A[10] = { 999 };
	int* p = A;
	cout << "1.배열명을 사용한 인덱스 표현" << endl;
	for (int i = 0; i < 10; i++) {
		A[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	cout << endl << endl;
	cout << "2. 배열명을 사용한 포인터 표현" << endl;
	for (int i = 0; i < 10; i++) {
		*(A + i) = i*i;
	}
	for (int i = 0; i < 10; i++) {
		cout << *(A + i) << " ";
	}
	cout << endl << endl;
	cout << "3. 배열명을 저장한 포인터 변수를 사용한 포인터 표현" << endl;
	for (int i = 0; i < 10; i++) {
		*(p + i) = i * i * i;
	}
	for (int i = 0; i < 10; i++) {
		cout << *(p + i) << " ";
	}
	cout << endl << endl;
	cout << "4. 배열명을 저장한 포인터 변수를 사용한 인덱스 표현" << endl;
	for (int i = 0; i < 10; i++) {
		p[i] = i * i * i * i;
	}
	for (int i = 0; i < 10; i++) {
		cout << p[i] << " ";
	}
	cout << endl << endl;

	cout << "3-1. postincrement 방식으로" << endl;
	for (int i = 0; i < 10; i++) {
		*(p++) = i * i * i;
	}
	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "3-2. preincerement 방식으로" << endl;
	for (int i = 0; i < 10; i++) { //배열 인덱스 값 넘어서 런타임 오류
		*(++p) = i * i * i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}