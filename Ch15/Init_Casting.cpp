#include <iostream>
using namespace std;
class BASE {
protected:
	int b_var;
public:
	BASE();
	BASE(int var);
	BASE(const BASE& obj);
	~BASE();
	void Print();
};

BASE::BASE() {
	cout << "BASE con without arg" << endl;
	b_var = 0;
}
BASE::BASE(int var) {
	cout << "BASE con with arg" << endl;
	b_var = var;
}
BASE::BASE(const BASE& obj) {
	cout << "BASE copy con" << endl;
	b_var = obj.b_var;
}
BASE::~BASE() {
	cout << "BASE deconstructor" << endl;

}
void BASE::Print() {
	cout << "BASE의 Print() " << " ";
	cout << "b_var: " << b_var << endl;
}

class DERIVED : public BASE {
private:
	int d_var;
public:
	DERIVED();
	DERIVED(int bvar,int dvar);
	DERIVED(const DERIVED& obj);
	~DERIVED();
	void Print();
};

DERIVED::DERIVED() 
	:BASE() //initializer list
{
	cout << "DERIVED con without arg" << endl;
	d_var = 0;
}
DERIVED::DERIVED(int bvar, int dvar) 
	:BASE(bvar) 
{
	d_var = dvar;
	cout << "DERIVED con with arg" << endl;
}
DERIVED::DERIVED(const DERIVED& obj) 
	:BASE(obj) //obj의 데이터타입은 DERIVED
{
	cout << "DERIVED copy con" << endl;
	d_var = obj.d_var;
}
DERIVED::~DERIVED() {

	cout << "DERIVED decon" << endl;
}
void DERIVED::Print() {
	cout << "DERIVED의 Print() " << endl;
	cout << "d_var: " << d_var << " b_var: " << b_var << endl;
}



int main() {
	BASE b(-10);
	b.Print();
	DERIVED d(100, 1000);
	d.Print();
	//implicit upcasting between objs 
	b = d;
	b.Print();

	cout << "between object ptr" << endl;
	BASE* bp = &b;
	bp->Print();
	DERIVED* dp = &d;
	dp->Print();
	bp = dp; //암묵적 upcasting
	(* bp).Print();
	bp = &b;
	dp = (DERIVED*)bp; //명시적 downcasting
	dp->Print();
	return 0;
}