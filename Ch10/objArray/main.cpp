#include <iostream>
#include "Circle.h"
using namespace std;
int main() {
	Circle A[3] = {Circle(10),Circle(20),Circle(30)};
	Circle B[3];
	B[0].setRadius(100);
	(*(B + 1)).setRadius(200);
	(B + 2)->setRadius(300);
	
	//B�迭��, �� ���� ��ü�� Setter�Լ��� ������ 0,0,0�� 100,200,300���� �ٲٱ�
	//3������ �ٸ� �������
	return 0;
}