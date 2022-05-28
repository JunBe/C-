#include <iostream>
using namespace std;
int product(int array[], int size);
double product(double array[], int size);
int main() {
	int const size = 3;
	int I[size] = {};
	double D[size] = {};
	cout << "3개의 실수를 입력하시오" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> D[i];
	}
	product(D, size);
	return 0;
	
}
int product(int array[], int size)
{
	int mul = 1;
	for (int i = 0; i < size; i++)
	{
		mul *= array[i];
	}
	cout << mul << endl;
	return mul;
}
double product(double array[], int size)
{
	double mul = 1;
	for (int i = 0; i < size; i++)
	{
		mul = mul*array[i];
	}
	cout << mul<<endl;
	return mul;
}