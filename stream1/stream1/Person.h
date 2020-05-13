#ifndef PRGII_BANK_PERSON_H
#define PRGII_BANK_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string name;
    int yearOfBirth;
public:
    Person(const string &name, int yearOfBirth);

    string getName();
    int getYearOfBirth();
};


#endif //PRGII_BANK_PERSON_H
