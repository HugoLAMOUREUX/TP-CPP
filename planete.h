//
// Created by hugol on 18/10/2022.
//

#ifndef TP4_PLANETE_H
#define TP4_PLANETE_H

#include "mammifere.h"
#include <list>
using std::list;

class Planete {
private:
    list<Mammifere*> habitants;
public:
    Planete(int size);
    int population();
    double ageMoyen () const;
    double poidsMoyenBaleine();
    void tue_le_doyen();

};

#endif /*{INCLUDE_GUARD}*/
