#ifndef PRGII_BANK_BANK_H
#define PRGII_BANK_BANK_H

#include <vector>
#include <string>
#include "Client.h"
#include "Account.h"
#include "PartnerAccount.h"

class Bank {
private:
    vector<Client *> clients;
    vector<Account *> accounts;
public:
    Client *getClient(string code);
    Account *getAccount(int number);

    Client *createClient(string name, int yearOfBirth, string code);
    Account *createAccount(int number, Client *owner);
    Account *createAccount(int number, Client *owner, double interestRate);
    PartnerAccount* createAccount(int number, Client* owner, Client* partner);
    PartnerAccount* createAccount(int number, Client* owner, Client* partner, double interestRate);

    void addInterest();

    ~Bank();
};

#endif //PRGII_BANK_BANK_H