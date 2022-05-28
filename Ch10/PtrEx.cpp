#include <iostream>
using namespace std;
int main() {
	int a = 123;
	int* ip = &a;
	char c = 'p';
	char* cp = &c;
	cout << "&a : " << &a << endl; //a�� �ּ�
	cout << "&ip : " << &ip << endl;//ip�� �ּ� (a�� �������� �ּҰ�)
	cout << "ip : " << ip << endl; //a�� �ּ�
	cout << "ip+1: " << ip + 1 << endl;//a+4����Ʈ 
	cout << "ip+2: " << ip + 2 << endl;//a+8����Ʈ
	short s = 5;
	short* sp = &s;
	cout << "sizeof(short): " << sizeof(short) << endl; //short������ 2
	cout << "&s: " << &s << endl; //s�� �ּҰ�
	cout << "sp: " << sp << endl; // s�� �ּҰ�
	cout << "sp+1: " << sp + 1 << endl; //s�� �ּҰ� +2����Ʈ
	cout << "sp+4: " << sp + 4 << endl; //s�� �ּҰ� +8����Ʈ
	cout << "*ip : " << *ip << endl; //a��
	cout << "&c : " << (void*)&c << endl; //c�� �ּҰ�
	cout << "&cp : " << (void*)&cp << endl; //cp�� �ּҰ�
	cout << "cp : " << (void*)cp << endl;
	cout << "*cp : " << *cp << endl;

	short S[10] = { 999 };
	short* sp1 = &S[3]; //&S[3] ��� (S+3) ����
	short* sp2 = &S[7];
	cout << "sp2: " << sp2 << endl;
	cout << "sp1: " << sp1 << endl;
	cout << "sp2 - sp1: " << sp2 - sp1 << endl; //���� �Ҷ� 2�� �����ֱ�

	int i;
	int* q = &i;
	cout << "q: " << q << endl;
	cout << "++q: " << ++q << endl; //preincrement
	cout << "q: " << q << endl;
	q = &i;
	cout << "q: " << q << endl;
	cout << "q++: " << q++ << endl; //postincrement
	cout << "q: " << q << endl;
	

	return 0;
}