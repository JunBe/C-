#include <iostream>
#include <cstdlib> //rand()함수 사용
using namespace std;

int main() {
	int A[25];
	int sum = 0;
	for (int i = 0; i < 25; i++)
	{
		int a = rand() % 25;
		if (a % 2 == 0) {
			sum += a;
		}
	}
	cout <<sum << endl;
	return 0;
}