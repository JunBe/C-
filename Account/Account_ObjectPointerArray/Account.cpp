#include <iostream>
#include "Account.h"
using namespace std;

Account::Account() {
	cout << "인자 없는 생성자" << endl;
	id = 0;
	balance = 0;
	name = new char[NAME_LEN];
	name[0] = NULL;
}
Account::Account(int i, int b, const char* n) {
	cout << "인자 있는 생성자" << endl;
	id = i;
	balance = b;
	name = new char[strlen(n) + 1];
	strcpy_s(name,strlen(n)+1, n);
		//strcpy를 써서 나한테 복사
	delete[] name;
}
Account::Account(const Account& a) {
	cout << "깊은 복사 생성자" << endl;
	id = a.id;
	balance = a.balance;
	name = new char[strlen(a.name)+1];
	strcpy_s(name, strlen(a.name) + 1, a.name);
}

Account& Account::operator= (const Account& a) {
	cout << "깊은 대입 연산자 overloading" << endl;
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
	cout << "소멸자" << endl;
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
	cout << "계좌의 ID : " << id << endl << "계좌의 잔액 : " << balance << endl << "이름: " << name << endl;
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
	if (this->name) {//매개변수 이름이 같아서 this로 안 헷갈리게 씀
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}