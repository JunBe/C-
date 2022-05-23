#include <iostream>
using namespace std;

int main() {
	int target = 20;
	int& ref = target;
	int& re = target;
	cout << "ref = " << ref << endl;
	cout << "target = " << target << endl;
	cout << "re= " << re << endl;
	cout << "&ref = " << &ref << endl;
	cout << "&target = " << &target << endl;
	cout << "&re = " << &re << endl; 
	//참조를 하는 변수와 참조 되는 변수의 주소값은 같다.
	ref = 100;
	cout << "ref = " << ref << endl;
	cout << "target = " << target << endl;
	cout << "re= " << re << endl;
	return 0;
}