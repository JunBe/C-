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
	//������ �ϴ� ������ ���� �Ǵ� ������ �ּҰ��� ����.
	ref = 100;
	cout << "ref = " << ref << endl;
	cout << "target = " << target << endl;
	cout << "re= " << re << endl;
	return 0;
}