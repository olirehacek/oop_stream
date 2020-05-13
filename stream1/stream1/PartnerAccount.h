#ifndef PRGII_BANK_PARTNERACCOUNT_H
#define PRGII_BANK_PARTNERACCOUNT_H

#include "Account.h"
#include "Client.h"




class PartnerAccount : public Account {
private:
    Client* partner;
public:
    PartnerAccount(int number, Client* owner, Client* partner);
    PartnerAccount(int number, Client* owner, Client* partner, double interestRate);

    Client* getPartner();
};

#endif //PRGII_BANK_PARTNERACCOUNT_H