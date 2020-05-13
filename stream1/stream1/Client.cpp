#include "Client.h"

Client::Client(const string &name, int yearOfBirth, const string &code) : Person(name, yearOfBirth) {
    this->code = code;
}

string Client::getCode() {
    return this->code;
}