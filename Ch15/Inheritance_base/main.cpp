#include <iostream>
#include "AAA.h"
#include "BBB.h"
using namespace std;

int main() {
	cout << "sizeof(AAA) : " << sizeof(AAA) << endl; //AAA의 모든 변수 사이즈 합
	cout << "sizeof(BBB) : " << sizeof(BBB) << endl; //AAA + BBB 모든 변수의 사이즈 합 (derived이기 때문에)
	AAA a1;
	a1.Print();
	AAA a2(10, 20, 30);
	a2.Print();
	/*cout << "a2.pri : " << a2.pri << endl; 불가
	a2.pro = 2000;*/
	cout << "About BBB 객체" << endl;
	BBB b1;
	b1.Print();
	BBB b2(100, "Alpha Go");
	b2.Print();
	//b2.d = 1000; private이라 불가
	return 0;
}