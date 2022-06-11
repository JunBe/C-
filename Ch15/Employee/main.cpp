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
	//Employee e; //�߻� class�� ��ü�� ���� �� ����
	Employee* E[MAX]={NULL};//��üpointer �迭
	int count=0;
	int choice;
	while (true) {
		printMenu();
		cout << "�޴��� �����ϼ��� : ";
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
			cout << "�߸��� ���� �Դϴ�." << endl;
			break;
		} //switch
	}//while
	
	return 0;
}
void printMenu() {
	cout << "--------------MENU--------------" << endl;
	cout << "1. ���� �Է� [Permenent]" << endl;
	cout << "2. ���� �Է� [Temporary]" << endl;
	cout << "3. ���� �Է� [SalesPerson]" << endl;
	cout << "4. ��� ������ �޿� ����" << endl;
	cout << "5. ��� ������ �޿� File ����" << endl;
	cout << "6. �����մϴ�. " << endl;
	cout << "--------------------------------" << endl;
}
void insertPermanent(Employee** E, int& count, int max) {
	if (count >= max) {
		cout << "�ִ�" << count << "�� ���� ���� ������ �����մϴ�" << endl;
		return;
	}
	string name;
	int salaly;
	cout << "�̸� : "; cin >> name;
	cout << "�Ǹ� �� : "; cin >> salaly;
	E[count] = new Permanent(salaly, name);
	count++;
}
void insertTemporary(Employee** T, int& count, int max) {
	//�ִ� ���� �� Ȯ���ϱ�
	if (count >= max) {
		cout << "�ִ�" << count << "�� ���� ���� ������ �����մϴ�" << endl;
		return;
	}
	string name;
	int hourlyWages, hrs;
	cout << "�̸� : "; cin >> name;
	cout << "���� �ð�: "; cin >> hrs;
	cout << "�ñ� : "; cin >> hourlyWages;
	T[count] = new Temp(hourlyWages,hrs,name);
	count++;
}
void insertSales(Employee** S, int& count, int max) {
	if (count >= max) {
		cout << "�ִ�" << count << "�� ���� ���� ������ �����մϴ�" << endl;
		return;
	}
	string name;
	int basicsalary, earning;
	cout << "�̸� : "; cin >> name;
	cout << "�⺻ �޿� : "; cin >> basicsalary;
	cout << "������� �ݾ� : "; cin >> earning;
	S[count] = new Sales(basicsalary, earning, name);
	count++;
}
void showAll(Employee** E, int count) {
	//��� ������ �̸��� �޿��� ���

	for (int i = 0; i < count; i++) {
		cout << "�̸� : " << E[i]->getName();
		cout << " �޿� : " << E[i]->getPay()<<endl;
	}
}
void store(Employee** E, int count) {
	ofstream fout; //ifstream fin for reading in from file
	char fname[100];
	cout << "File Name to Store: ";
	cin >> fname;
	fout.open(fname);
	if (!fout) {
		cout << "ERROR �߻�" << endl;
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