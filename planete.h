//
// Created by hugol on 18/10/2022.
//

#ifndef TP4_PLANETE_H
#define TP4_PLANETE_H

#include "mammifere.h"
#include <list>
#include <memory>

using std::list;

class Planete {
private:
    //list<Mammifere*> habitants;
    list<std::unique_ptr<Mammifere>> habitants;
public:
    Planete(int size);
   // Planete(const Planete&)=delete;
    int population() const;
    double ageMoyen () const;
    double poidsMoyenBaleine() const;
    void tue_le_doyen();

};

#endif /*{INCLUDE_GUARD}*/
