//
// Created by hugol on 18/10/2022.
//

#include "mammifere.h"
#include <string>
#include <stdlib.h> //.h entre <> c'est du C et sans .h c'est cpp
using std::string;

Mammifere::Mammifere(int age, int poids){
    this->age=age;
    this->poids=poids;
}

int Mammifere::getAge()const {
    return age;
}
int Mammifere::getPoids()const {
    return poids;
}
string Mammifere::getMode()const {
    return "marcher";
}
