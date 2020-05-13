#ifndef PRGII_BANK_CLIENT_H
#define PRGII_BANK_CLIENT_H

#include <string>
#include "Person.h"

using namespace std;

class Client : public Person {
private:
    string code;
public:
    Client(const string &name, int yearOfBirth, const string &code);

    string getCode();
};

#endif //PRGII_BANK_CLIENT_H