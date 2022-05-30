#include <iostream>
using namespace std;
const int MAX = 10;
int* DyintArr(int n);
int main() {
	int A[MAX] = {999}; //static array 
	int size;
	cout << "A: " << A << endl;
	cout << "&size: " << &size << endl;
	cout << "동적 배열 크기: " ;
	cin >> size;
	//int* B = new int[size]; //Dynamic array 생성 Memory allocation 
	int* B = DyintArr(size);//function invoke
	cout << "&B: " << &B << endl;
	cout << "B: " << B << endl;
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "입력: ";
		cin >> *(B + i);//B[i];
		total += *(B + i);
	}
	double avg = (double)total / size;
	cout << "평균: " << avg << endl;
	//평균을 계산하고 출력한다.
	delete[] B; B = NULL; //해지 후 NULL로 초기화 Memory release 
	cout << "B: " << B << endl; //B값이 삭제돼서 주소가 이상해짐
	//cout << "*(B+1): " << *(B+1) << endl; //B가 없어져서 런타임에러
	//delete[] B;//런타임에러
	
	return 0;
}
int* DyintArr(int n)
{
	int* p = new int[n];
	return p;
}