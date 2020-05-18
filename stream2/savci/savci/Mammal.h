#ifndef MAMMAL_H_
#define MAMMAL_H_

#include <string>

//Třída savců, naše základní třída, definuje virtuální metodu SendLoudNoise(), 
//ale nikdy nevidíme text, který tato metoda vydává.
//To dokazuje, že náš příklad polymorfismu funguje správně.

class Mammal {
public:
    Mammal() {};
    virtual ~Mammal() {};

    virtual std::string SendLoudNoise()
    {
        std::string str("Delam zvireci zvuk!");
        return str;
    }
};
#endif /* MAMMAL_H_ */