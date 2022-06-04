#include <iostream>
#include "AAA.h"
#include "BBB.h"
using namespace std;

int main() {
	AAA b;
	AAA* bp = &b;
	BBB d;
	BBB* dp = &d;
	cout << "¾Ï¹¬Àû upcasting between Objects" << endl;
	b = d;
	//base classÀÇ Print()°¡ ½ÇÇà µÊ
	b.Print(); //still static binding
	cout << "¾Ï¹¬Àû upcasting between Pointers" << endl;
	bp = dp; //dynamic binding
	//derived classÀÇ print()°¡ ½ÇÇà µÊ
	(* bp).Print();

	return 0;
}