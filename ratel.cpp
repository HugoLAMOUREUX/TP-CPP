//
// Created by hugol on 18/10/2022.
//

#include "ratel.h"
#include <iostream>
using std::cout;
using std::endl;

Ratel::Ratel(int age, int poids): Mammifere(age,poids){
}

void Ratel::crier()const{
    cout<<"Je renifle";
}