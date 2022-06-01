#include <iostream>
#include "Account.h"
using namespace std;
const int ACC_MAX = 10;
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

void PrintMenu();
void MakeAccount(Account** C, int size, int& index);
void Deposit(Account** C,int index);
void Withdraw(Account** C,int index);
void Inquire(Account** C,int index);
void cleanup(Account** C,int index);// 알아서 매개변수 정하기
int main() {
	int size=ACC_MAX;
	Account* C[ACC_MAX]; //정적 객체 포인터 배열
	int index = 0;
	int choice;
	while (true) {
		PrintMenu();
		cout << "Choice : ";
		cin >> choice;
		switch (choice) {
		case MAKE:
			MakeAccount(C, size, index);
			break;
		case DEPOSIT:
			Deposit(C, index);
			break;
		case WITHDRAW:
			Withdraw(C, index);
			break;
		case INQUIRE:
			Inquire(C, index);
			break;
		case EXIT:
			cleanup(C, index);
			break;
		default:
			cout << "Wrong choice" << endl;
			break;
		}
	}
	return 0;
}

void PrintMenu() {
	cout << " -------------MENU------------- " << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 전체 조회" << endl;
	cout << "5. 프로그램 종료" << endl;
}
void MakeAccount(Account** C, int size, int& index) {//아이디를 물어봄 id,balance,받음
	int id, bal;
	char name[NAME_LEN];
	if (index < size) {
		cout << "계좌 개설을 위한 입력 : (계좌id, 잔액, 이름): ";
		cin >> id>>bal>>name;
		C[index] = new Account(id,bal,name);/*
		(*C[index]).SetID(id);
		(*(C + index))->SetBalance(bal);
		(**(C + index)).SetName(name);*/
		index++;
	}
	else {
		cout << "최대 " << size << "개의 계좌 개수 초과 " << endl;
	}
}
void Deposit(Account** C, int index) {
	//사용자에게 계좌 id의 입금액 묻기
	//id가 존재하지 않는 경우를 체크
	//inmoney함수를 불러 balance를 입금액 만큼 증가시킨다
	int id,m;
	cout << "아이디를 입력하시오 : ";
	cin >> id;
	cout << "입금액을 입력하시오 : ";
	cin >> m;
	int bal;
	bool find=false;
	for (int i = 0; i < index; i++) {
		if (C[i]->getID()==id) {
			bal=C[i]->InMoney(m);
			cout << "현재 잔고: " << (*C[i]).getBalance() << endl;
			find = true;
			break;
		}
		
	}
	if (find == false) {
	cout << "존재하지 않는 ID 입니다." << endl;
	}
}
void Withdraw(Account** C, int index) {
	//사용자에게 계좌 id의 입금액 묻기
	//id가 존재하지 않는 경우를 체크
	// id가 존재하는 경우 getbalance를 이용하여 잔액을 얻어온다.
	// 잔액이 출금액보다 작은경우 잔액부족 출력
	// outmoney를 불러 balance를 출금액만큼 감소시킨다
	int m, id, num;
	cout << "아이디를 입력하시오 : ";
	cin >> id;
	cout << "출금액을 입력하시오 : ";
	cin >> m;
	bool find = false;
	for (int i = 0; i < index; i++) {//숙제
		if (C[i]->getID() == id) {
			find = true;
			num = i;
			break;
		}
	}
	if (find == false) {
		cout << "ID가 존재하지 않습니다." << endl;
	}
	else {
		if ((*C[num]).getBalance() >= m) {
			(** (C + num)).OutMoney(m);
		}
		else {
			cout << "잔액이 부족합니다" << endl;
		}
	}

}
void Inquire(Account** C, int index) { //id,balance 출력
	for (int i = 0; i < index; i++) {
		C[i]->ShowAllData();
	}
}

void cleanup(Account** C,int index) {// 알아서 매개변수 정하기
	for (int i = 0; i < index; i++) {
		delete C[i]; C[i] = NULL; //delete[] 는 배열일 때
	}
	cout << "EXIT" << endl;
}