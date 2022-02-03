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
    ElCh1(double, ElCh1);
    ~ElCh1(); // destructeur (free)

    // Setter
    void setDonnee(double d)
    {
        donnee = d;
    }

    void setElCh1(ElCh1 *suiv)
    {
        this->suiv = suiv;
    }

    // Getter
    int getDonnee()
    {
        return donnee;
    }

    // Constructeur
    // ElCh1::ElCh1(double donnee) // nom de classe ":: = méthode de cette classe"
    // {
    //     // constructeur = initialiser les données
    //     this->donnee = donnee;
    // }

    ElCh1(double newDonnee, ElCh1 *newSuiv)
    {
        donnee = newDonnee;
        suiv = newSuiv;
    }

    // Fonction afficher
    void afficher()
    {
        // std::string afficher = "[" + parseInt(donnee) + "]"; // création de la chaîne
        std::cout << "[" << donnee << "]" << '\n'; // affichage de la chaine : << = + (concaténation)
    }
};

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
    std::string message = "--- Debut programme ---"; // création de la chaîne
    std::cout << message << '\n';                    // affichage de la chaine

    ElCh1 *suiv = new ElCh1(1.62, NULL); // en "dynamique"
    ElCh1 *suiv2 = new ElCh1(5.890, suiv);
    suiv->afficher();
    suiv2->afficher();
    suiv->setDonnee(2.3);
    std::cout << '\n' << "Affichage apres setDonnee" << '\n' << '\n';
    suiv->afficher();
    suiv2->afficher();

    std::cout << "--- Fin programme ---" << '\n'; // affichage de la chaine
    return 0;
}