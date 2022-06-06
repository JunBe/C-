#include <iostream>
#include "AAA.h"
#include "BBB.h"
using namespace std;

int main() {
	AAA b;
	BBB d;
	b = d;
	b.Print();
	AAA* bp = new BBB;
	bp->Print();
	delete bp; bp = NULL;
	return 0;
}