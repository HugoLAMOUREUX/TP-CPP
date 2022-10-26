//
// Created by hugol on 18/10/2022.
//

#ifndef TP4_BALEINE_H
#define TP4_BALEINE_H

#include "mammifere.h"

class Baleine : public Mammifere {
public:
    Baleine(int age, int poids);
    void crier()const override;
    virtual string getMode()const;


};

#endif /*{INCLUDE_GUARD}*/
