#include <iostream>
#include "Point.h"
using namespace std;
const int MAX = 3;

int main() {
	int x, y;
	cout << "1. ���� ��ü �迭" << endl;
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

	cout << "2. ���� ��ü �迭" << endl;
	cout << "�� ���� ����Ʈ ��ü �迭�� ���ϴ°�: ";
	int n;
	cin >> n;
	Point* B = new Point[n];
	//���� �غ� ��
	//for(int i=0;i<n;i++)
	for (int i = 0; i < n; i++) {
		cout << i << "��° ����Ʈ �Է�(x,y): ";
		cin >> x >> y;
		B[i].SetX(x);
		(B + i)->SetY(y);
	}
	for (int i = 0; i < n; i++) {
		(*(B + i)).Print();
	}
	delete[] B; B = NULL;
	cout << "3. ���� ��ü ������ �迭" << endl;
	Point* C[MAX];
	for (int i = 0; i < MAX; i++) { //�Է¹ޱ�
		cout <<i<< "��° ����Ʈ �Է�(x,y): ";
		cin >> x >> y;
		C[i] = new Point(x, y); //C�� Point** C[i]�� Point* 
	}
	for (int i = 0; i < MAX; i++) { //����ϱ�
		//C[i]->Print();
		(* (C + i))->Print();
	}
	cout << "memory cleanup"<<endl;
	for (int i = 0; i < MAX; i++) {
		delete C[i]; C[i] = NULL;
	}
	return 0;
}