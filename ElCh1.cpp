#include <iostream>
using namespace std; // std is a standard class in C++

class ElCh1
{
private:
    // Privé pour protéger (surtout de la modif des utilisateurs par ex)
    // + donner accès grace aux fonctions d'accès (getters / setters en public)
    double donnee;
    ElCh1 *suiv;

public:
    ElCh1(/* args = attributs */);
    ~ElCh1(); // destructeur (free)
};

ElCh1::ElCh1(/* args */) // nom de classe ":: = méthode de cette classe"
{
    // constructeur = initialiser les données
}

ElCh1::~ElCh1()
{
}

// Main
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}