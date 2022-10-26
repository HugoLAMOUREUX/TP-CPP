//
// Created by hugol on 18/10/2022.
//
#include "baleine.h"
#include <iostream>
using std::cout;
using std::endl;

Baleine::Baleine(int age, int poids): Mammifere(age,poids){
}

void Baleine::crier() const {
    cout<<"Je chante";
}

string Baleine::getMode() const {
    return "nager";
}

