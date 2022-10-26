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
#include <algorithm>

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
            habitants.push_back( std::make_unique<Baleine>(dist50(rng),dist1500(rng))); //new retourne un pointeur sur l'objet alloué
            habitants.push_back(  std::make_unique<Ratel>(dist25(rng),dist15(rng)));
        }
    }


int Planete::population() const{
    return habitants.size();
}

double Planete::ageMoyen() const {
    double res=0;
    //for(auto it=habitants.begin();it!=habitants.end();it++) {
    //    res+=(**it).getAge(); //it retourne un pointeur sur l'adresse du tableau
    //}

    //std::accumulate <numeric>
    res=std::accumulate(habitants.begin(),habitants.end(),0,[](const int cumul, const auto& e){ return cumul+e->getAge();});
    /*for( const auto& e: habitants){
        res+=e->getAge();
    }*/

    res/=habitants.size();
    return res;
}

double Planete::poidsMoyenBaleine() const {
    double res=0;
    int nbBaleine=0;
    for( const auto& e: habitants){
        Baleine* b=dynamic_cast<Baleine*>(e.get());  //.get() sur un unique ptr permets de retourner l'objet brut
        if(b!=nullptr){
            res+=b->getPoids();
            nbBaleine++;
        }
    }
    res/=nbBaleine;
    return res;
}

void Planete::tue_le_doyen() {

    //<algorithm> std::max_element
    //std::unique_ptr<Mammifere> aTuer;
    std::list<std::unique_ptr<Mammifere>>::iterator result;


    result = std::max_element(habitants.begin(), habitants.end(), [](std::unique_ptr<Mammifere>& a, std::unique_ptr<Mammifere>& b) {
        return a->getAge()<b->getAge();
    });
    /*    int age=0;
     * for( const auto& e: habitants){
        if ((e->getAge()) > age){
            aTuer=e.get();
            age=e->getAge();
        }
    }*/
    //cout<< aTuer->getAge()<<"ans"<<endl;
    cout << result->get()->getAge()<<endl;
    habitants.erase(result);

}
