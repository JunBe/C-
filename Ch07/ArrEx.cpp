#include <iostream>
using namespace std;
int funcMin(int *B, int size);
void coppyArr(int *D, int *E, int size);
void printArr(int *D, int size);
int main() {
	int i = 10;
	cout << sizeof(int) << endl;
	cout << "&i: " << &i << endl;
	int arrA[3] = { 1,3,5 };
	int arrB[3] = { -4,-5,-7 };
	cout << "sizeof(arrA): " << sizeof(arrA) << endl;
	cout << "sizeof(arrB): " << sizeof(arrB) << endl;
	coppyArr(arrA, arrB, 3);
	printArr(arrA, 3);
	cout <<"arrB :"<<  arrB << endl;
	cout << "arrA :" << arrA << endl;
	cout << "arrB[0]"<< & arrB[0] << endl;
	cout <<"&arrB[1]"<< & arrB[1] << endl;
	cout <<"&arrB[2]"<< & arrB[2] << endl;
	cout << "arrA[0]" << &arrA[0] << endl;
	cout << "&arrA[1]" << &arrA[1] << endl;
	cout << "&arrA[2]" << &arrA[2] << endl;
	double arrC[3] = { 50.7,67.8,43.5 };
	cout << &arrC << endl;
	cout << &arrC[0] << endl;
	cout << &arrC[1] << endl;
	cout << sizeof(short) << endl;
	int res = funcMin(arrB, 3);
	cout << "배열 arrB의 요소중 최소값은: " << res << endl;
	return 0;
}
int funcMin(int *B, int size) { //int funcMin(int B[], int size)
	cout << "B in funcMin(): " << B << endl;
	int min = *B; //int min=B[0]
	for (int i = 0; i < size; i++)
	{
		if (min > *(B+i)){ //if(min>B[i])
			min = *(B+i); //min=B[i]
		}
	}
	return min;
}
void coppyArr(int *D, int *E, int size) // Copy From E to D
{
	for (int i = 0; i < size; i++) {
		*(D+i) = *(E+i);
	}
}
void printArr(int *D, int size) //print element of D
{
	for (int i = 0; i < size; i++) {
		cout << "D[" <<i<<"] : "<< *(D+i) << endl;
	}
}