#include "Account.h"

int Account::count = 0;

Account::Account(int number, Client* owner)
{
    Account::count++;

    this->number = number;
    this->balance = 0;
    this->interestRate = 0.005;
    this->owner = owner;
}

Account::Account(int number, Client *owner, double interestRate) {
    Account::count++;

    this->number = number;
    this->balance = 0;
    this->interestRate = interestRate;
    this->owner = owner;
}

int Account::getNumber() {
    return this->number;
}

double Account::getBalance() {
    return this->balance;
}

double Account::getInterestRate() {
    return this->interestRate;
}

Client *Account::getOwner() {
    return this->owner;
}

bool Account::canWithdraw(double amount) {
    return this->balance - amount > 0;
}

void Account::deposit(double amount) {
    if(amount > 0)
    {
        this->balance += amount;
    }
}

bool Account::withdraw(double amount) {
    if(amount > 0 && canWithdraw(amount))
    {
        this->balance -= amount;
        return true;
    }
    return false;
}

void Account::addInterest() {
    this->balance = this->balance * (1 + this->interestRate);
}

int Account::getCount() {
    return count;
}

Account::~Account() {
    Account::count--;
}