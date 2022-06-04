#include <iostream>
#include "AAA.h"
#include "BBB.h"
using namespace std;

int main() {
	AAA b;
	AAA* bp = &b;
	BBB d;
	BBB* dp = &d;
	cout << "�Ϲ��� upcasting between Objects" << endl;
	b = d;
	//base class�� Print()�� ���� ��
	b.Print(); //still static binding
	cout << "�Ϲ��� upcasting between Pointers" << endl;
	bp = dp; //dynamic binding
	//derived class�� print()�� ���� ��
	(* bp).Print();

	return 0;
}