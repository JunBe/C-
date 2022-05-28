#include <iostream>
#include <string>
using namespace std;

int main() {
	char cstyle[] = "Are you a string, too ?";
	string cppstyle = "Who am I ?";
	//string copy
	char A[50] = "Sedol Lee";
	char B[50] = "Alpha Go";
	string astr = "Sedol Lee";
	string bstr = "Alpha Go";
	strcpy_s(B,sizeof(B), A); //destination¿¡ B¸¸Å­ copy 
	cout << B<<endl;
	bstr = astr;
	//string length
	cout <<strlen(A)<< endl;
	cout << astr.size() << endl;
	//string input without space
	cout << "C style string input(no space):";
	cin >> A;
	cout << "C++ style string input(no space):";
	cin >> astr;
	cout << "A : " << A << endl;
	cout << "astr : " << astr << endl;
	//input buffer clear
	cin.clear();
	cin.ignore();
	
	//string input with space
	cout << "C style string input(with space):";
	cin.getline(A, 50);
	cout << "C++ style string input(with space):";
	getline(cin, astr);
	cout << "A : " << A << endl;
	cout << "astr : " << astr << endl;
	
	return 0;
}