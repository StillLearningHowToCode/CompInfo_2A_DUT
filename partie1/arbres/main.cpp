#include "./arbre.cpp"

int main()
{

    // Instanciation d'un arbre
    ABR<int> arbre;
    arbre.inserer(40);
    arbre.inserer(50);
    arbre.inserer(14);
    arbre.inserer(16);
    arbre.inserer(5);
    arbre.inserer(3);
    arbre.inserer(7);
    arbre.inserer(55);
    arbre.inserer(45);

    cout << '\n';
    cout << "Le parcours infixe de cet arbre est : " << endl;
    arbre.infixe();
    cout << '\n';

    cout << '\n';
    cout << "Le parcours postfixe de cet arbre est : " << endl;
    arbre.postfixe();
    cout << '\n';

    cout << '\n';
    cout << "Le parcours prefixe de cet arbre est : " << endl;
    arbre.prefixe();
    cout << '\n';

    // cout << '\n';
    // if (arbre.recherche(3) != 0)
    // {
    //     cout << "Le noeud avec la cle 3 appartient a l'arbre" << endl;
    // }
    // else
    // {
    //     cout << "Le noeud avec la cle 3 n'appartient pas a l'arbre" << endl;
    // }

    // if (arbre.recherche(60) != 0)
    // {
    //     cout << "Le noeud avec la cle 60 appartient a l'arbre" << endl;
    // }
    // else
    // {
    //     cout << "Le noeud avec la cle 60 n'appartient pas a l'arbre" << endl;
    // }

    arbre.supprimer(3);
    cout << '\n';
    cout << "Le parcours infixe de l'arbre apres la suppression de 3 devient : " << endl;
    arbre.infixe();

    arbre.supprimer(40);
    cout << '\n';
    cout << "Le parcours infixe de l'arbre apres la suppression 40 devient : " << endl;
    arbre.infixe();

    return 0;
}