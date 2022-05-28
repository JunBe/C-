#include <iostream>
using namespace std;
int main() {
	int a = 123;
	int* ip = &a;
	char c = 'p';
	char* cp = &c;
	cout << "&a : " << &a << endl; //a의 주소
	cout << "&ip : " << &ip << endl;//ip의 주소 (a의 포인터의 주소값)
	cout << "ip : " << ip << endl; //a의 주소
	cout << "ip+1: " << ip + 1 << endl;//a+4바이트 
	cout << "ip+2: " << ip + 2 << endl;//a+8바이트
	short s = 5;
	short* sp = &s;
	cout << "sizeof(short): " << sizeof(short) << endl; //short사이즈 2
	cout << "&s: " << &s << endl; //s의 주소값
	cout << "sp: " << sp << endl; // s의 주소값
	cout << "sp+1: " << sp + 1 << endl; //s의 주소값 +2바이트
	cout << "sp+4: " << sp + 4 << endl; //s의 주소값 +8바이트
	cout << "*ip : " << *ip << endl; //a값
	cout << "&c : " << (void*)&c << endl; //c의 주소값
	cout << "&cp : " << (void*)&cp << endl; //cp의 주소값
	cout << "cp : " << (void*)cp << endl;
	cout << "*cp : " << *cp << endl;

	short S[10] = { 999 };
	short* sp1 = &S[3]; //&S[3] 대신 (S+3) 가능
	short* sp2 = &S[7];
	cout << "sp2: " << sp2 << endl;
	cout << "sp1: " << sp1 << endl;
	cout << "sp2 - sp1: " << sp2 - sp1 << endl; //빼기 할땐 2로 나눠주기

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