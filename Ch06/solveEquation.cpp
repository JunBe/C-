#include <iostream>
using namespace std;
bool solveEquation(double a, double b, double c, double d, double e, double f, double& x, double& y, bool& isSolvable)
{
	if (a * d - b * c==0) {
		isSolvable = false;
	}
	else {
		isSolvable = true;
		x = (e * d - b * f) / (a * d - b * c);
		y = (a * f - e * c) / (a * d - b * c);
	}
	return isSolvable;
}

int main() {
	cout << "a,b,c,d,e,f를 입력하시오 :  ";
	double a,b,c,d,e,f;
	double x=1, y=0;
	bool bo = true;
	cin >> a >> b >> c >> d >> e >> f;
	solveEquation(a, b, c, d, e, f, x, y, bo);
	if (bo == 0) {
		cout << "The equation has no solution.";
	}
	else {
		cout << "The equation has solution." << endl;
		cout << "x: " << x << " y: " << y << endl;
		cout << "ax + by = " << a * x + b * y << endl;
		cout << "cx + dy = " << c * x + d * y << endl;
	}
}
