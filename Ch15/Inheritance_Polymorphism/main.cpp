#include <iostream>
#include "DerivedCircle.h"
#include "DerivedRectangle.h"
#include "GeometricObject.h"
#include <string>
using namespace std;
const int MAX = 5;

int main() { 
	cout << "sizeof(GeometricObject) : " << sizeof(GeometricObject)<<endl;
	//virtual ���� 40bytes
	// virtual ���� �� 44Bytes
	// ������ ���� �迭���� �غ��Ѵ�.
	GeometricObject* A[MAX] { NULL }; //��ü������ �迭
	A[0] = new Circle(100, "blue", 100,50);
	A[1] = new Rectangle(300, 300, "red", 50, 100);
	A[2] = new Rectangle(200, 200, "Yellow", 30, 60);
	A[3] = new Circle(50, "white", 40, 80);
	A[4] = new GeometricObject("Purple", 300, 100);
	for (int i = 0; i < MAX; i++) {
		A[i]->Draw(); //Polymorphism
	}
	for (int i = 0; i < MAX; i++) {
		delete A[i]; A[i] = NULL;
	}
	return 0;
}