#include <iostream>
#include "Circle.h"
using namespace std;
int main() {
	Circle A[3] = {Circle(10),Circle(20),Circle(30)};
	Circle B[3];
	B[0].setRadius(100);
	(*(B + 1)).setRadius(200);
	(B + 2)->setRadius(300);
	
	//B배열의, 각 원소 객체의 Setter함수에 접근해 0,0,0을 100,200,300으로 바꾸기
	//3가지의 다른 방법으로
	return 0;
}