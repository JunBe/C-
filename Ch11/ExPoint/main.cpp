#include <iostream>
#include "Point.h"
using namespace std;
const int MAX = 3;

int main() {
	int x, y;
	cout << "1. 정적 객체 배열" << endl;
	Point A[MAX];
	for (int i = 0; i < MAX; i++) {
		cout << "x,y : ";
		cin >> x >> y;
		A[i].SetX(x);
		(A + i)->SetY(y);
	}
	for (int i = 0; i < MAX; i++) {
		(A + i)->Print();
	}

	cout << "2. 동적 객체 배열" << endl;
	cout << "몇 개의 포인트 객체 배열을 원하는가: ";
	int n;
	cin >> n;
	Point* B = new Point[n];
	//각자 해볼 것
	//for(int i=0;i<n;i++)
	for (int i = 0; i < n; i++) {
		cout << i << "번째 포인트 입력(x,y): ";
		cin >> x >> y;
		B[i].SetX(x);
		(B + i)->SetY(y);
	}
	for (int i = 0; i < n; i++) {
		(*(B + i)).Print();
	}
	delete[] B; B = NULL;
	cout << "3. 정적 객체 포인터 배열" << endl;
	Point* C[MAX];
	for (int i = 0; i < MAX; i++) { //입력받기
		cout <<i<< "번째 포인트 입력(x,y): ";
		cin >> x >> y;
		C[i] = new Point(x, y); //C는 Point** C[i]는 Point* 
	}
	for (int i = 0; i < MAX; i++) { //출력하기
		//C[i]->Print();
		(* (C + i))->Print();
	}
	cout << "memory cleanup"<<endl;
	for (int i = 0; i < MAX; i++) {
		delete C[i]; C[i] = NULL;
	}
	return 0;
}