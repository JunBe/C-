#include <iostream>
using namespace std;
char* reverseString(char* src, int len);
char* reverseString_static(char* src, int len);
int main() {
	char orig[] = "NEMODORI"; //static memory binding, on stack
	char* copy = reverseString(orig, strlen(orig));
	//char* copy= reverseString_static(orig, strlen(orig)); //not working version
	cout << "orig: " << orig << endl;
	cout << "copy: " << copy << endl;
	delete[] copy; copy = NULL;
	return 0;
}

char* reverseString(char* src, int len) {
	char* reverse = new char[len + 1]; // Dynamic Memory binding, on heap
	for (int i = 0; i < len; i++) {
		//reverse[i] = src[len - i - 1];
		*(reverse + i) = *(src + len - i - 1);		
	}
	reverse[len] = '\0';
	return reverse;
}
char* reverseString_static(char* src, int len) {
	char reverse[100]; // static Memory binding
	for (int i = 0; i < len; i++) {
		//reverse[i] = src[len - i - 1];
		*(reverse + i) = *(src + len - i - 1);
	}
	reverse[len] = '\0';
	return reverse; //돌아오는 순간 스택에서 다 날아간다
}