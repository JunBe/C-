#include <iostream>
using namespace std;
const int MAX = 10;
int* DyintArr(int n);
int main() {
	int A[MAX] = {999}; //static array 
	int size;
	cout << "A: " << A << endl;
	cout << "&size: " << &size << endl;
	cout << "���� �迭 ũ��: " ;
	cin >> size;
	//int* B = new int[size]; //Dynamic array ���� Memory allocation 
	int* B = DyintArr(size);//function invoke
	cout << "&B: " << &B << endl;
	cout << "B: " << B << endl;
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "�Է�: ";
		cin >> *(B + i);//B[i];
		total += *(B + i);
	}
	double avg = (double)total / size;
	cout << "���: " << avg << endl;
	//����� ����ϰ� ����Ѵ�.
	delete[] B; B = NULL; //���� �� NULL�� �ʱ�ȭ Memory release 
	cout << "B: " << B << endl; //B���� �����ż� �ּҰ� �̻�����
	//cout << "*(B+1): " << *(B+1) << endl; //B�� �������� ��Ÿ�ӿ���
	//delete[] B;//��Ÿ�ӿ���
	
	return 0;
}
int* DyintArr(int n)
{
	int* p = new int[n];
	return p;
}