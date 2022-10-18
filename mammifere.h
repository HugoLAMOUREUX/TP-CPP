//
// Created by hugol on 18/10/2022.
//
#ifndef TP4_MAMMIFERE_H
#define TP4_MAMMIFERE_H

#include <string>

using std::string;

class Mammifere{
private:
    int age;
    int poids;
    string mode;
public:
    int getAge()const;
    int getPoids()const;
    string getMode()const;
    Mammifere(int age, int poids, string mode);
    virtual ~Mammifere()=default;
    virtual void crier()const=0;
};

#endif /*{INCLUDE_GUARD}*/
