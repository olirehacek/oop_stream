#ifndef PRGII_BANK_ACCOUNT_H
#define PRGII_BANK_ACCOUNT_H

#include "Client.h"

class Account {
private:
    int number;
    double balance;
    double interestRate;

    Client* owner;

    static int count;

public:
    Account(int number, Client* owner);
    Account(int number, Client* owner, double interestRate);

    int getNumber();
    double getBalance();
    double getInterestRate();
    Client* getOwner();

    bool canWithdraw(double amount);
    void deposit(double amount);
    bool withdraw(double amount);
    void addInterest();

    static int getCount();

    ~Account();
    
};

#endif //PRGII_BANK_ACCOUNT_H