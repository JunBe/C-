#include <iostream>
#include "Account.h"
using namespace std;

int main() {
	Account a;
	a.ShowAllData();
	Account b(1, 1000, "Alpha Go");
	b.ShowAllData();
	Account c(b);
	c.ShowAllData();
	a = b; //a.operator= (b)
	a.ShowAllData();
	return 0;
}