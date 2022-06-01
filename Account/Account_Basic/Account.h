#ifndef ACCOUNT_H
#define ACCOUNT_H
const int NAME_LEN = 100;
class Account {
private:
	int id;
	int balance;
	char* name;
public:
	Account(); 
	Account(int i,int b,const char* n);
	Account(const Account& a);
	~Account();
	Account& operator= (const Account& a);
	int getID();
	int getBalance();
	char* getName();
	void ShowAllData();
	void InMoney(int val);
	void OutMoney(int val);
};
#endif