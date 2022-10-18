#include <iostream>
#include "planete.h"
#include <string>
using std::cout;
using std::endl;
using uint = unsigned int;

int main() {
    try {
        constexpr uint size = 1000;
        Planete p(size); //génère une planète contenant size animaux de chaque espèce
        cout << "Planete de " << p.population() << " habitants\n";
        cout << "age moyen:" << p.ageMoyen() << " années\n";
        cout << "Poids moyen des baleines:" << p.poidsMoyenBaleine() << "kg\n";
        for (uint i = 0; i < 50; ++i)
        {
            p.tue_le_doyen(); //c'est l'odre naturel des choses
            cout << "Planète de " << p.population() << " habitants" << "\n\n";
        }
    }
    catch (const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}
