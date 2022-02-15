#ifndef FILE_CPP
#define FILE_CPP
#include "file.h"

template <typename T>
// Ajouter un élément
void File<T>::enfiler(const T &valeur)
{
    liste.inserer(liste.taille(), valeur);
}

template <typename T>
// Retirer un élément
void File<T>::defiler()
{
    liste.supprimer(0);
}

template <typename T>
// Retourner le premier élément
T &File<T>::premier() const
{
    return liste.getNoeud(0);
}

template <typename T>
// Vérifier si la file est vide
bool File<T>::estVide() const
{
    if (liste.taille() == 0)
    {
        return true;
    }
    return false;
}

template <typename T>
// Retourner la taille de la file
int File<T>::taille() const
{
    return liste.taille();
}

template <typename T>
// Afficher la file
void File<T>::afficher() const
{
    liste.afficher();
}

#endif