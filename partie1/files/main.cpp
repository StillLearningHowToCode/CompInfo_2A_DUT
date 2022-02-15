#include "file.cpp"
#include <string>

int main()
{

    // Instanciation d'une file
    File<string> file;

    // Insertion de 5 noeuds dans la file
    file.enfiler("Ceci");
    file.enfiler("est");
    file.enfiler("une");
    file.enfiler("file");
    file.enfiler("de chaines");
    file.enfiler("de caracteres");

    // Afficher les valeurs de noeuds
    cout << "Afficher la file" << endl;
    file.afficher();

    cout << '\n';

    // afficher les valeurs de trois noeuds
    cout << "Afficher la tete de la file" << endl;
    cout << file.premier() << endl;

    cout << '\n';

    // Supprimer trois noeuds
    cout << "Supprimer quelques noeuds et afficher la file d'attente" << endl;
    file.defiler();
    file.defiler();
    file.afficher();

    cout << '\n';
    cout << "Afficher la tete de la file d'attente" << endl;
    cout << file.premier() << endl;

    cout << '\n';

    // Afficher la taille apres la suppression
    cout << "Nombre de noeuds dans la file d'attente : " << file.taille();

    return 0;
}