#ifndef ARBRE_H
#define ARBRE_H
#include <iostream>

using namespace std;

// Définition du noeud en tant que struct
template <typename T>
struct Noeud
{
    T donnees;
    Noeud<T> *gauche;
    Noeud<T> *droit;
};

// Définition de la classe Liste
template <class T>
class ABR
{
private:
    Noeud<T> *racine;
    int compteur;
    Noeud<T> *CreerNoeud(const T &valeur);
    // Fonctions d'aide
    void detruire(Noeud<T> *ptr);                                                
    void inserer(const T &value, Noeud<T> *&ptr);                                
    void infixe(Noeud<T> *ptr) const;                                            
    void prefixe(Noeud<T> *ptr) const;                                           
    void postfixe(Noeud<T> *ptr) const;                                         
    Noeud<T> *successeur(Noeud<T> *ptr, Noeud<T> *&parent) const;                
    Noeud<T> *predecesseur(Noeud<T> *ptr, Noeud<T> *&parent) const;              
    void supprimer(Noeud<T> *ptr, Noeud<T> *parent);                            
    Noeud<T> *recherche(const T &value, Noeud<T> *ptr, Noeud<T> *&parent) const; 

public:
    ABR();
    ~ABR();
    void inserer(const T &value);
    void detruire();
    void supprimer(const T &value);
    Noeud<T> *recherche(const T &value) const;
    void infixe() const;
    void prefixe() const;
    void postfixe() const;
    int taille() const;
    bool estVide() const;
};
#endif