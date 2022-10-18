//
// Created by hugol on 18/10/2022.
//

#include <string>
#include <iostream>
#include "planete.h"
#include "baleine.h"
#include "ratel.h"
#include <time.h>       /* time */
#include <random>

using std::cout;
using std::endl;

Planete::Planete(int size){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<int> dist50(1,50);
    std::uniform_int_distribution<int> dist1500(1,1500);
    std::uniform_int_distribution<int> dist25(1,25);
    std::uniform_int_distribution<int> dist15(1,15);
    for(int i=0;i<size;i++){
            habitants.push_back( new Baleine(dist50(rng),dist1500(rng))); //new retourne un pointeur sur l'objet alloué
            habitants.push_back( new Ratel(dist25(rng),dist15(rng)));
        }
    }


int Planete::population(){
    return habitants.size();
}

double Planete::ageMoyen() const {
    double res=0;
    //for(auto it=habitants.begin();it!=habitants.end();it++) {
    //    res+=(**it).getAge(); //it retourne un pointeur sur l'adresse du tableau
    //}
    for( const auto e: habitants){
        res+=e->getAge();
    }

    res/=habitants.size();
    return res;
}

double Planete::poidsMoyenBaleine() {
    double res=0;
    int nbBaleine=0;
    for( const auto e: habitants){
        Baleine* b=dynamic_cast<Baleine*>(e);
        if(b!=nullptr){
            res+=b->getPoids();
            nbBaleine++;
        }
    }
    res/=nbBaleine;
    return res;
}

void Planete::tue_le_doyen() {
    Mammifere* aTuer;
    int age=0;
    for( const auto e: habitants){
        if ((e->getAge()) > age){
            aTuer=e;
            age=e->getAge();
        }
    }
    cout<< aTuer->getAge()<<"ans"<<endl;
    habitants.remove(aTuer);

}
