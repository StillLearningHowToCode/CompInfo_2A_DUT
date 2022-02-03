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
    ElCh1(double, ElCh1 *suiv);
    ~ElCh1(); // destructeur (free)
};

// constructeur
ElCh1::ElCh1(double donnee, ElCh1 *suiv) // nom de classe ":: = méthode de cette classe"
{
    // constructeur = initialiser les données
    this->donnee = donnee;
}

// destructeur
ElCh1::~ElCh1()
{
}

// Main
int main(int argc, char const *argv[])
{
    std::string message = "Le programme a tourne !"; // création de la chaîne
    std::cout << message << '\n';                    // affichage de "Hello World !"
    return 0;
}