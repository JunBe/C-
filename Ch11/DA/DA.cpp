#include <iostream>
#include "DA.h"
using namespace std;

DA::DA() {
	size = DEFAULT_ARR_SIZE;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 1;
	}
	cout << "constructor without arg" << endl;
}
DA::DA(int n) {
	size = n;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
	cout << "constructor with arg" << endl;

}
DA::DA(const DA& obj) {
	size = obj.size;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = obj.arr[i];
	}
	cout << "deep copy constructor" << endl;


}
DA::~DA() {
	if (arr) {
		delete[] arr; arr = NULL;
	}
	cout << "Deconstructor" << endl;
}
DA& DA::operator=(const DA& obj) {
	if (this != &obj) {
		delete[] arr;
		size = obj.size;
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = obj.arr[i];
		}
		cout << "copy assignment operator overloading 복사 대입 연산자 오버로딩" << endl;
	}
	return *this;
}
