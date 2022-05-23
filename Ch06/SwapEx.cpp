#include <iostream>
using namespace std;
void sub(int i, int& r,int* p); //i�� pass by value , r�� pass by reference , p�� pass by pointer
void swap_passByValue(int x, int y);
void swap_passByRef(int& x, int& y);
void swap_passByPtr(int* x, int* y);
int main() {
	int a, b,c;
	a = 1;
	b = 2;
	c = 3;
	cout << "addr of a: " << &a << endl;
	cout << "addr of b: " << &b << endl;
	cout << "addr of c: " << &c << endl;
	sub(a, b,&c);
	cout << "a: " << a << " b: " << b<<" c : "<<c<<endl;
	int i, j;
	cout << "i��: "; cin >> i;
	cout << "j��: "; cin >> j;
	swap_passByValue(i, j);
	cout << "swap_passByValue i: " << i << " j: " << j << endl;
	swap_passByRef(i, j);
	cout << "swap_passByRef i: " << i << " j: " << j << endl;
	swap_passByPtr(&i, &j);
	cout << "swap_passByPtr i: " << i << " j: " << j << endl;

	return 0;
}
void sub(int i, int& r ,int* p) //i�� pass by value , r�� pass by reference, p�� pass by pointer
{
	cout << "addr of i: " << &i << endl;
	cout << "addr of r: " << &r << endl;
	cout << "addr of p: " << &p << endl;
	i = 10;
	r = 50;
	*p = 30;
}
void swap_passByValue(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
void swap_passByRef(int& x, int& y) //x,y�� �޸� Ȯ���� ���� ����
{
	int temp = x;
	x = y;
	y = temp;
}

void swap_passByPtr(int* x, int* y) //x,y �� ���ÿ� �޸� Ȯ���� ��
{
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	int temp = *x;
	*x = *y;
	*y = temp;

}