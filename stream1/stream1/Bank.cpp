#include "Bank.h"

Client *Bank::getClient(string code) {
    for (const auto &client: this->clients) {
        if (client->getCode() == code)
            return client;
    }
    return nullptr;
}

Account *Bank::getAccount(int number) {
    for (const auto &account: this->accounts) {
        if (account->getNumber() == number) {
            return account;
        }
    }
    return nullptr;
}

Client *Bank::createClient(string name, int yearOfBirth, string code) {
    auto *client = new Client(name, yearOfBirth, code);
    this->clients.emplace_back(client);
    return client;
}

Account *Bank::createAccount(int number, Client *owner) {
    auto *account = new Account(number, owner);
    this->accounts.emplace_back(account);
    return account;
}

Account *Bank::createAccount(int number, Client *owner, double interestRate) {
    auto *account = new Account(number, owner, interestRate);
    this->accounts.emplace_back(account);
    return account;
}

PartnerAccount *Bank::createAccount(int number, Client *owner, Client *partner) {
    auto* partnerAccount = new PartnerAccount(number, owner, partner);
    this->accounts.emplace_back(partnerAccount);
    return partnerAccount;
}

PartnerAccount *Bank::createAccount(int number, Client *owner, Client *partner, double interestRate) {
    auto* partnerAccount = new PartnerAccount(number, owner, partner, interestRate);
    this->accounts.emplace_back(partnerAccount);
    return partnerAccount;
}

void Bank::addInterest() {
    for (const auto &account: this->accounts) {
        account->addInterest();
    }
}

Bank::~Bank() {
    for (auto client: clients) {
        delete client;
    }

    for (auto account: accounts) {
        delete account;
    }
}