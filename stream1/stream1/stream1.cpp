#include <iostream>
#include "Bank.h"

using namespace std;

int main() {
    auto* bank = new Bank();

    for (int i = 0; i < 100; i++) {
        bank->createClient("John Smith " + to_string(i), i + 1900, to_string(i + 1000));
        bank->createAccount(i, bank->getClient(to_string(i + 1000)));
    }

    auto* sampleAccount = bank->getAccount(2);
    auto* sampleClient = bank->getAccount(2)->getOwner();

    sampleAccount->deposit(1000);
    cout << "Account number: " << sampleAccount->getNumber() << endl;
    cout << "Account owner: " << sampleClient->getName() << ", " << sampleClient->getCode() << ", born " << sampleClient->getYearOfBirth() << endl;
    cout << "Balance: " << sampleAccount->getBalance() << endl;
    cout << "Interest rate: " << sampleAccount->getInterestRate() * 100 << "%" << endl;
    bank->addInterest();
    cout << "Balance after interest: " << sampleAccount->getBalance() << endl;
    sampleAccount->withdraw(900);
    cout << "Balance after withdrawal: " << sampleAccount->getBalance() << endl;

    if (sampleAccount->canWithdraw(200)) {
        cout << "Withdrew 200, account balance is now: " << sampleAccount->getBalance() << endl;
    }
    else {
        cout << "Cannot withdraw 200, only " << sampleAccount->getBalance() << " left!" << endl;
    }

    cout << "There are currently " << Account::getCount() << " accounts" << endl;

    delete bank;
    return 0;
}