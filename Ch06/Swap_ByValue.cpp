#include <iostream>
using namespace std;

void swap_byvalue(int n1,int n2)
{
	int tmp;
	tmp = n1;
	n1 = n2;
	n2 = tmp;
}
int main() {
	int num1=1;
	int num2=3;
	swap_byvalue(num1, num2);
	cout << "num1 is " << num1 << " and num2 is " << num2 << endl;
	//swap_byvalue로는 스왑을 할 수 없다.
	return 0;
}