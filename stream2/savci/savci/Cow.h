#define COW_H_

#include "Mammal.h"

class Cow : public Mammal {
public:
    Cow() {};
    virtual ~Cow() {};

    std::string SendLoudNoise()
    {
        std::string str("muu!");
        return str;
    }
};
