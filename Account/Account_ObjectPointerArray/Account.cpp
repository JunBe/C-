#include <iostream>
#include "Account.h"
using namespace std;

Account::Account() {
	cout << "���� ���� ������" << endl;
	id = 0;
	balance = 0;
	name = new char[NAME_LEN];
	name[0] = NULL;
}
Account::Account(int i, int b, const char* n) {
	cout << "���� �ִ� ������" << endl;
	id = i;
	balance = b;
	name = new char[strlen(n) + 1];
	strcpy_s(name,strlen(n)+1, n);
		//strcpy�� �Ἥ ������ ����
	delete[] name;
}
Account::Account(const Account& a) {
	cout << "���� ���� ������" << endl;
	id = a.id;
	balance = a.balance;
	name = new char[strlen(a.name)+1];
	strcpy_s(name, strlen(a.name) + 1, a.name);
}

Account& Account::operator= (const Account& a) {
	cout << "���� ���� ������ overloading" << endl;
	if (this != &a) {
		id = a.id;
		balance = a.balance;
		delete[] name; name = NULL;
		name = new char[strlen(a.name) + 1];
		strcpy_s(name, strlen(a.name) + 1, a.name);
	}
	return *this;
}
Account::~Account() {
	cout << "�Ҹ���" << endl;
}
int Account::getID() {
	return id;
}
int Account::getBalance() {
	return balance;
}
char* Account::getName() {
	return name;
}
void Account::ShowAllData() {
	cout << "������ ID : " << id << endl << "������ �ܾ� : " << balance << endl << "�̸�: " << name << endl;
}
int Account::InMoney(int val) {
	balance += val;
	return balance;
}
int Account::OutMoney(int val) {
	balance -= val;
	return balance;
}
void Account::SetID(int val) {
	id = val;
}
void Account::SetBalance(int val) {
	balance = val;
}
void Account::SetName(const char* name) {
	if (this->name) {//�Ű����� �̸��� ���Ƽ� this�� �� �򰥸��� ��
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}