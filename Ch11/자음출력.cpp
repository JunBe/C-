#include <iostream>
using namespace std;

int main() {
	const int size=100; // �迭ũ�⿡ ���� ����
	char A[size] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char* p = A;
	char mo[10] = { 'a','e','i','o','u','A','E','I','O','U' };
	char C[size] = "";
	for (int i = 0; i < size; i++) {
		int total=0;
		for(int j=0;j<10;j++){
			if ( *(p + i) != mo[j]) { 
				total += 1; // �����̸� 9 �����̸� 10	
			}
		}
		if (total == 10) {
			C[i] = *(p + i);
			cout << C[i];
		}
		cout << "��";
	}
	return 0;
}