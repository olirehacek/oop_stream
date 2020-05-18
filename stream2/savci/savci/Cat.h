#define CAT_H_

#include "Mammal.h"

class Cat : public Mammal {
public:
    Cat() {};
    virtual ~Cat() {};

    std::string SendLoudNoise()
    {
        std::string str("mnau!");
        return str;
    }
};