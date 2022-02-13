#ifndef PILE_H
#define PILE_H
#include "../listes/liste.cpp"

// Définition de la classe Pile

template <typename T>
class Pile
{
private:
    Liste<T> liste;

public:
    void empiler(const T &valeur);
    void depiler();
    T &premier() const;
    void afficher() const;
    int taille() const;
};

#endif