#include "pile.cpp"
#include <string>

int main()
{

    // Instanciation d'une pile
    Pile<string> pile;

    // Insertion de quelques noeuds dans la pile
    pile.empiler("Hey");
    pile.empiler("ceci");
    pile.empiler("est");
    pile.empiler("une");
    pile.empiler("pile");
    pile.empiler("avec");
    pile.empiler("des chaines !");

    // Afficher les valeurs de noeuds
    cout << "Afficher la pile" << endl;
    pile.afficher();

    cout << '\n';

    // afficher les valeurs de trois noeuds
    cout << "Afficher la tete de la pile" << endl;
    cout << pile.premier() << endl;

    cout << '\n';

    // Supprimer trois noeuds
    cout << "Supprimer quelques noeuds et afficher la pile" << endl;
    pile.depiler();
    pile.depiler();
    pile.afficher();

    cout << '\n';
    cout << "Afficher la tete de la pile" << endl;
    cout << pile.premier() << endl;

    cout << '\n';

    // Afficher la taille apres la suppression
    cout << "Nombre de noeuds dans la pile: " << pile.taille();

    return 0;
}