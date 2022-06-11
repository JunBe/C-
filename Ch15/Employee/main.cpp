#include <iostream>
#include "Employee.h"
#include "Permanent.h"
#include "Sales.h"
#include "Temporary.h"
#include <fstream>
using namespace std;
const int MAX = 10;
enum {PERMANENT =1,TEMPORARY,SALES,SHOW,STORE,EXIT};
void printMenu();
void insertPermanent(Employee** E,int& count,int max);
void insertTemporary(Employee** T, int& count, int max);
void insertSales(Employee** S, int& count, int max);
void showAll(Employee** E, int count);
void store(Employee** E, int count);
void exit(Employee** E,int count);
int main() {
	//Employee e; //추상 class는 객체를 만들 수 없음
	Employee* E[MAX]={NULL};//객체pointer 배열
	int count=0;
	int choice;
	while (true) {
		printMenu();
		cout << "메뉴를 선택하세요 : ";
		cin >> choice;
		switch (choice) {
		case PERMANENT:
			insertPermanent(E,count,MAX);
			break;
		case TEMPORARY:
			insertTemporary(E, count, MAX);
			break;
		case SALES:
			insertSales(E, count, MAX);
			break;
		case SHOW:
			showAll(E, count);
			break;
		case STORE:
			store(E, count);
			break;
		case EXIT:
			exit(E, count);
			return 0;
			break;
		default:
			cout << "잘못된 선택 입니다." << endl;
			break;
		} //switch
	}//while
	
	return 0;
}
void printMenu() {
	cout << "--------------MENU--------------" << endl;
	cout << "1. 직원 입력 [Permenent]" << endl;
	cout << "2. 직원 입력 [Temporary]" << endl;
	cout << "3. 직원 입력 [SalesPerson]" << endl;
	cout << "4. 모든 직원의 급여 보기" << endl;
	cout << "5. 모든 직원의 급여 File 저장" << endl;
	cout << "6. 종료합니다. " << endl;
	cout << "--------------------------------" << endl;
}
void insertPermanent(Employee** E, int& count, int max) {
	if (count >= max) {
		cout << "최대" << count << "명 까지 정보 저장이 가능합니다" << endl;
		return;
	}
	string name;
	int salaly;
	cout << "이름 : "; cin >> name;
	cout << "판매 수 : "; cin >> salaly;
	E[count] = new Permanent(salaly, name);
	count++;
}
void insertTemporary(Employee** T, int& count, int max) {
	//최대 직원 수 확인하기
	if (count >= max) {
		cout << "최대" << count << "명 까지 정보 저장이 가능합니다" << endl;
		return;
	}
	string name;
	int hourlyWages, hrs;
	cout << "이름 : "; cin >> name;
	cout << "일한 시간: "; cin >> hrs;
	cout << "시급 : "; cin >> hourlyWages;
	T[count] = new Temp(hourlyWages,hrs,name);
	count++;
}
void insertSales(Employee** S, int& count, int max) {
	if (count >= max) {
		cout << "최대" << count << "명 까지 정보 저장이 가능합니다" << endl;
		return;
	}
	string name;
	int basicsalary, earning;
	cout << "이름 : "; cin >> name;
	cout << "기본 급여 : "; cin >> basicsalary;
	cout << "벌어들인 금액 : "; cin >> earning;
	S[count] = new Sales(basicsalary, earning, name);
	count++;
}
void showAll(Employee** E, int count) {
	//모든 직원의 이름과 급여를 출력

	for (int i = 0; i < count; i++) {
		cout << "이름 : " << E[i]->getName();
		cout << " 급여 : " << E[i]->getPay()<<endl;
	}
}
void store(Employee** E, int count) {
	ofstream fout; //ifstream fin for reading in from file
	char fname[100];
	cout << "File Name to Store: ";
	cin >> fname;
	fout.open(fname);
	if (!fout) {
		cout << "ERROR 발생" << endl;
		return;
	}
	for (int i = 0; i < count; i++) {
		fout << E[i]->getName();
		fout << "  " << E[i]->getPay() << endl;
	}
	fout.close();
}
void exit(Employee** E, int count) {
	for (int i = 0; i < count; i++) {
		delete E[i]; E[i] = NULL;
	}
}