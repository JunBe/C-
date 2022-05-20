#include <iostream>
using namespace std;
char* ShiftLeftString(char* msg, int len);

int main() {
	
	char org[] = "BINGO JJANG!!!";
	char* copy = ShiftLeftString(org, strlen(org));
	
	cout << org << endl;

	for (int i = 0; i < strlen(org); i++) {
		cout << copy << endl;
		copy=ShiftLeftString(copy, strlen(org));
	}
	delete[] copy; copy = NULL;
	return 0;
}
char* ShiftLeftString(char* msg, int len) {
	char* shift = new char[len+1];
	char tmp;
	tmp = *(msg);
	for (int i = 0; i <= len-2; i++) {
		*(shift+i) = *(msg + i+1);
	}
	*(shift+len-1) = tmp;
	*(shift+len) = '\0';
	return shift;
}








