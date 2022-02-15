#ifndef FILE_H
#define FILE_H
#include "../listes/liste.cpp"
using namespace std;

// Définition de la classe File en utilisant les listes définies précédemment
template <typename T>
class File
{
private:
    Liste<T> liste;

public:
    void enfiler(const T &valeur);
    void defiler();
    T &premier() const;
    int taille() const;
    bool estVide() const;
    void afficher() const;
};
#endif