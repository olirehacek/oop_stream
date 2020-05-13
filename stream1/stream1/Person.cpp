#include "Person.h"

Person::Person(const string &name, int yearOfBirth) {
    this->name = name;
    this->yearOfBirth = yearOfBirth;
}

string Person::getName() {
    return name;
}

int Person::getYearOfBirth() {
    return yearOfBirth;
}