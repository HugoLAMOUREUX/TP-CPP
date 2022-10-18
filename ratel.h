//
// Created by hugol on 18/10/2022.
//

#ifndef TP4_RATEL_H
#define TP4_RATEL_H
#include "mammifere.h"

class Ratel : public Mammifere {
public:
    Ratel(int age, int poids);
    void crier()const;

};
#endif /*{INCLUDE_GUARD}*/
