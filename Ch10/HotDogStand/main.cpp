#include <iostream>
#include "HotDogStand.h"
using namespace std;

int main() {
	HotDogStand sList[10];
	int count, v;
	char c;
	cout << "Stand count(3°³~10°³) : ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		sList[i].SetID(i);
	}
	while (1) {
		cout << "ID : ";
		cin >> v;
		c = getchar();
		cout << c << endl;
		if (c=='q'||c=='Q') {
			break;
		}
		sList[v].JustSold();
	}
	for (int i = 0; i < count; i++) {
		cout<<"Stand "<<sList[i].getID() << " sold " << sList[i].getnumSold() << endl;
	}
	cout << "Total Sold = " << HotDogStand::GetTotalSold();
	return 0;
}
