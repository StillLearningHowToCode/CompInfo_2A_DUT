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
    ElCh1(double);
    ~ElCh1(); // destructeur (free)

    // Setter
    void setDonnee(double d)
    {
        donnee = d;
    }

    void setElCh1()
    {
        this->suiv = suiv;
    }
    
    // Getter
    int getDonnee()
    {
        return donnee;
    }
};

// constructeur
ElCh1::ElCh1(double donnee) // nom de classe ":: = méthode de cette classe"
{
    // constructeur = initialiser les données
    this->donnee = donnee;
}

// Destructeur :
// un destructeur porte le même nom que la classe dans laquelle il est défini et est précédé d'un tilde
// un destructeur n'a pas de type de retour (même pas void)
// un destructeur ne peut pas avoir d'argument
// la définition d'un destructeur n'est pas obligatoire lorsque celui-ci n'est pas nécessaire
ElCh1::~ElCh1()
{
}

// Main
int main(int argc, char const *argv[])
{
    std::string message = "Le programme a tourne !"; // création de la chaîne
    std::cout << message << '\n';                    // affichage de la chaine
    ElCh1 *suiv = new ElCh1(1.62);                   // en "dynamique"
    return 0;
}