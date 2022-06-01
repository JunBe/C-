#include <iostream>
#include "Account.h"
using namespace std;
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

void PrintMenu();
void MakeAccount(Account* B, int size, int& index);
void Deposit(Account* B,int index);
void Withdraw(Account* B,int index);
void Inquire(Account* B,int index);
int main() {
	int size;
	cout << "How many Account to create ?";
	cin >> size;
	Account* B = new Account[size]; //���� ��ü �迭
	int index = 0;
	int choice;
	while (true) {
		PrintMenu();
		cout << "Choice : ";
		cin >> choice;
		switch (choice) {
		case MAKE:
			MakeAccount(B, size, index);
			break;
		case DEPOSIT:
			Deposit(B, index);
			break;
		case WITHDRAW:
			Withdraw(B, index);
			break;
		case INQUIRE:
			Inquire(B, index);
			break;
		case EXIT:
			cout << "EXIT" << endl;
			delete[] B; B = NULL;
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
void MakeAccount(Account* B, int size, int& index) {//���̵� ��� id,balance,����
	int id, bal;
	char name[NAME_LEN];
	if (index < size) {
		cout << "���� ������ ���� �Է� : (����id, �ܾ�, �̸�): ";
		cin >> id>>bal>>name;
		(B[index]).SetID(id);
		(B + index)->SetBalance(bal);
		(*(B + index)).SetName(name);
		index++;
	}
	else {
		cout << "�ִ� " << size << "���� ���� ���� �ʰ� " << endl;
	}
}
void Deposit(Account* B, int index) {
	//����ڿ��� ���� id�� �Աݾ� ����
	//id�� �������� �ʴ� ��츦 üũ
	//inmoney�Լ��� �ҷ� balance�� �Աݾ� ��ŭ ������Ų��
	int id,m;
	cout << "���̵� �Է��Ͻÿ� : ";
	cin >> id;
	cout << "�Աݾ��� �Է��Ͻÿ� : ";
	cin >> m;
	bool find=false;
	for (int i = 0; i < index; i++) {
		if (B[i].getID()==id) {
			B[i].InMoney(m);
			cout << "���� �ܰ�: " << B[i].getBalance() << endl;
			find = true;
			break;
		}
		
	}
	if (find == false) {
	cout << "�������� �ʴ� ID �Դϴ�." << endl;
	}
}
void Withdraw(Account* B, int index) {
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
		if (B[i].getID() == id) {
			find = true;
			num = i;
			break;
		}
	}
	if (find == false) {
		cout << "ID�� �������� �ʽ��ϴ�." << endl;
	}
	else {
		if (B[num].getBalance() >= m) {
			B[num].OutMoney(m);
		}
		else {
			cout << "�ܾ��� �����մϴ�" << endl;
		}
	}

}
void Inquire(Account* B, int index) { //id,balance ���
	for (int i = 0; i < index; i++) {
		B[i].ShowAllData();
	}
}