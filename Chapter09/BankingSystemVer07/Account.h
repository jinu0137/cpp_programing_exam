/*
* 파일이름: Account.h
* 작성자: 이진우
* 업데이트 정보: [2021.07.22] 파일버전 0.7
*/

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account {
private:
	int accID;
	int balance;
	char *cusName;

public:
	Account(int ID, int money, char *name);
	Account(const Account &ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};

#endif