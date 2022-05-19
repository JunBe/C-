# include <iostream>
using namespace std;

int main() {
	cout << "Width: ";
	int w;
	cin >> w;
	cout << "Height: ";
	int h;
	cin >> h;
	int area = w * h;
	cout << "면적은: " << area << " 입니다." << endl;

	return 0;
}