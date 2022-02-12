#include "liste.cpp"
#include <string>

int main()
{
    // Instanciation d'une liste chainée liste de type string
    Liste<string> liste;

    // Insertion de six noeuds dans la liste
    liste.inserer(0, "Bonsoir");
    liste.inserer(1, "ceci");
    liste.inserer(2, "est");
    liste.inserer(3, "une");
    liste.inserer(4, "liste");
    liste.inserer(5, "chainee");
    liste.inserer(6, "de caracteres");

    // Afficher les valeurs de noeuds
    cout << "Afficher la liste" << endl;
    liste.afficher();

    cout << '\n';

    // afficher les valeurs de trois noeuds
    cout << "Afficher les donnees de quelques noeuds" << endl;
    cout << liste.getNoeud(1) << endl;
    cout << liste.getNoeud(3) << endl;
    cout << liste.getNoeud(4) << endl;

    cout << '\n';

    // Supprimer trois noeuds
    cout << "Supprimer quelques noeuds et afficher la liste" << endl;
    liste.supprimer(0);
    liste.supprimer(3);
    liste.afficher();

    cout << '\n';

    // Afficher la liste apres la suppression
    cout << "Nombre de noeuds dans la liste: " << liste.taille();

    return 0;
}