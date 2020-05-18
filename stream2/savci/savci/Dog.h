#define DOG_H_

#include "Mammal.h"

//zdědí z třídy savců a přepíše metodu SendLoudNoise().
//Kromě toho jsou téměř totožné.Metodu v odvozené třídě nemusíte přepisovat.
//Pokud jste chtěli výchozí chování, můžete to specifikovat ve své základní třídě a neuvádět to v
//vaše odvozená třída.Poté, když je tato metoda volána, bude objekt standardně používat verzi základní třídy.

class Dog : public Mammal {
public:
    Dog() {};
    virtual ~Dog() {};

    std::string SendLoudNoise()
    {
        std::string str("haf!");
        return str;
    }
};