//
// Created by hugol on 18/10/2022.
//

#include "mammifere.h"
#include <string>
#include <stdlib.h>
using std::string;

Mammifere::Mammifere(int age, int poids, string mode){
    this->age=age;
    this->poids=poids;
    this->mode=mode;
}

int Mammifere::getAge()const {
    return age;
}
int Mammifere::getPoids()const {
    return poids;
}
string Mammifere::getMode()const {
    return mode;
}
