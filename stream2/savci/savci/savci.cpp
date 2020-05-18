#include <iostream>
#include "Mammal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"

const int cNumAnimals = 3;

int main()
{
    Mammal* pAnimal[cNumAnimals] = { new Dog, new Cat, new Cow };

    for (int i = 0; i < cNumAnimals; ++i)
    {
        std::cout << pAnimal[i]->SendLoudNoise() << std::endl;
        delete pAnimal[i];
    }

    return 0;
}