#ifndef PILE_CPP
#define PILE_CPP
#include "pile.h"

/* Une pile est similaire à une liste chaînée
 * On réutilisera donc ce qui a été effectué en premier temps : les listes
 * ".\CompInfo\partie1\listes" */

template <typename T>
void Pile<T>::empiler(const T &valeur)
{
    liste.inserer(0, valeur);
}

template <typename T>
void Pile<T>::depiler()
{
    liste.supprimer(0);
}

template <typename T>
T &Pile<T>::premier() const
{
    return liste.getNoeud(0);
}

template <typename T>
void Pile<T>::afficher() const
{
    liste.afficher();
}

template <typename T>
int Pile<T>::taille() const
{
    return liste.taille();
}

#endif