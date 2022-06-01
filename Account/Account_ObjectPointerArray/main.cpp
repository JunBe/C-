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
void cleanup(Account** C,int index);// �˾Ƽ� �Ű����� ���ϱ�
int main() {
	int size=ACC_MAX;
	Account* C[ACC_MAX]; //���� ��ü ������ �迭
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
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. ��ü ��ȸ" << endl;
	cout << "5. ���α׷� ����" << endl;
}
void MakeAccount(Account** C, int size, int& index) {//���̵� ��� id,balance,����
	int id, bal;
	char name[NAME_LEN];
	if (index < size) {
		cout << "���� ������ ���� �Է� : (����id, �ܾ�, �̸�): ";
		cin >> id>>bal>>name;
		C[index] = new Account(id,bal,name);/*
		(*C[index]).SetID(id);
		(*(C + index))->SetBalance(bal);
		(**(C + index)).SetName(name);*/
		index++;
	}
	else {
		cout << "�ִ� " << size << "���� ���� ���� �ʰ� " << endl;
	}
}
void Deposit(Account** C, int index) {
	//����ڿ��� ���� id�� �Աݾ� ����
	//id�� �������� �ʴ� ��츦 üũ
	//inmoney�Լ��� �ҷ� balance�� �Աݾ� ��ŭ ������Ų��
	int id,m;
	cout << "���̵� �Է��Ͻÿ� : ";
	cin >> id;
	cout << "�Աݾ��� �Է��Ͻÿ� : ";
	cin >> m;
	int bal;
	bool find=false;
	for (int i = 0; i < index; i++) {
		if (C[i]->getID()==id) {
			bal=C[i]->InMoney(m);
			cout << "���� �ܰ�: " << (*C[i]).getBalance() << endl;
			find = true;
			break;
		}
		
	}
	if (find == false) {
	cout << "�������� �ʴ� ID �Դϴ�." << endl;
	}
}
void Withdraw(Account** C, int index) {
	//����ڿ��� ���� id�� �Աݾ� ����
	//id�� �������� �ʴ� ��츦 üũ
	// id�� �����ϴ� ��� getbalance�� �̿��Ͽ� �ܾ��� ���´�.
	// �ܾ��� ��ݾ׺��� ������� �ܾ׺��� ���
	// outmoney�� �ҷ� balance�� ��ݾ׸�ŭ ���ҽ�Ų��
	int m, id, num;
	cout << "���̵� �Է��Ͻÿ� : ";
	cin >> id;
	cout << "��ݾ��� �Է��Ͻÿ� : ";
	cin >> m;
	bool find = false;
	for (int i = 0; i < index; i++) {//����
		if (C[i]->getID() == id) {
			find = true;
			num = i;
			break;
		}
	}
	if (find == false) {
		cout << "ID�� �������� �ʽ��ϴ�." << endl;
	}
	else {
		if ((*C[num]).getBalance() >= m) {
			(** (C + num)).OutMoney(m);
		}
		else {
			cout << "�ܾ��� �����մϴ�" << endl;
		}
	}

}
void Inquire(Account** C, int index) { //id,balance ���
	for (int i = 0; i < index; i++) {
		C[i]->ShowAllData();
	}
}

void cleanup(Account** C,int index) {// �˾Ƽ� �Ű����� ���ϱ�
	for (int i = 0; i < index; i++) {
		delete C[i]; C[i] = NULL; //delete[] �� �迭�� ��
	}
	cout << "EXIT" << endl;
}