#include <stdio.h>
#include <iostream>
using namespace std;

// On va creer ici un arbre binaire
// un arbre qui a 1 noeuds constitué de deux branches, un sur la gauche, qui contient
// les valeurs inferieurs au noeud en cours, et une sur la droite, qui
// contient les valeurs supérieures ...

template <class T>
class Cl_Arbre;

template <class T>
class Cl_Noeud
{
private:
    static int NbrNoeuds;

public:
    Cl_Noeud *gauche;
    Cl_Noeud *droite;
    T valeur;
    inline T &val() const { return valeur; };
    Cl_Noeud() { NbrNoeuds++; };
    ~Cl_Noeud()
    {
        delete gauche;
        delete droite;
    };
    friend class Cl_Arbre<T>;
}; // end class

template <class T>
int Cl_Noeud<T>::NbrNoeuds = 0;

template <class T>
class Cl_Arbre
{
private:
    Cl_Noeud<T> *racine;
    void Inserer(Cl_Noeud<T> *);
    void Balayage(Cl_Noeud<T> *);
    Cl_Noeud<T> *DonnepRacine() const { return racine; }; // renvoie un pointeur sur le pNoeud racine
    Cl_Noeud<T> *Rechercher(const T) const;

public:
    Cl_Arbre() { racine = NULL; }  // constructeur
    ~Cl_Arbre() { delete racine; } // constructeur
    void Creer(const T);
    void Supprimer(const T);
    void Affichage(void);
    void NbrNoeuds(void) { cout << Cl_Noeud<T>::NbrNoeuds; };
}; // end class

// FONCTION      : Affichage
// DESCRIPTION   : Affiche l'arbre à l'écran
template <class T>
void Cl_Arbre<T>::Affichage()
{
    // Si racine différent de NULL alors il affiche l'arbre
    if (racine != NULL)
        // Affectation du pointeur racine à pNoeud
        Balayage(racine);
    else
        cout << "Arbre vide!" << endl;
    // end if
} // end process

// FONCTION      : Balaye
// DESCRIPTION   : fonction recursive de balayage dans l'arbre
template <class T>
void Cl_Arbre<T>::Balayage(Cl_Noeud<T> *pNoeud)
{

    // On traverse vers la gauche (valeurs inferieures), si il existe
    if (pNoeud->gauche)
        Balayage(pNoeud->gauche);

    // On affiche le noeud en cours
    if (pNoeud)
        cout << pNoeud->valeur << "\n";

    // Et traverse vers la droite (valeurs superieurs)
    if (pNoeud->droite)
        Balayage(pNoeud->droite);

} // end process

// FONCTION      : Creer
// DESCRIPTION   : Création d'un Noeud
template <class T>
void Cl_Arbre<T>::Creer(const T val)
{
    // Allocation memoire pour un nouveau pNoeud
    Cl_Noeud<T> *pNoeudTmp = new Cl_Noeud<T>;
    // Initialisation des pointeur pNoeud à NULL
    pNoeudTmp->gauche = NULL;
    pNoeudTmp->droite = NULL;
    // Transfert de la valeur
    pNoeudTmp->valeur = val;
    // Insérer dans l'arborescence de l'arbre
    Inserer(pNoeudTmp);
} // end process

// FONCTION      : Inserer
// DESCRIPTION   : Insertion d'un pNoeud dans l'arbre;
template <class T>
void Cl_Arbre<T>::Inserer(Cl_Noeud<T> *pNoeud)
{
    // Si le pNoeud est vide, on sort
    if (!pNoeud)
        return;

    // Si l'arbre est vide, on lui accroche le Noeud et on sort
    if (racine == NULL)
    {
        racine = pNoeud;
        return;
    } // end if

    // Création de deux pointeurs de déplacement dans l'arbre et initilisation
    Cl_Noeud<T> *courant = racine;
    Cl_Noeud<T> *precedent = NULL;

    // On se déplace à travers l'arbre jusqu'a ce que courant atteint la valeur NULL
    // precedent memorise l'adresse du dernier Noeud
    while (courant)
    {
        precedent = courant;
        if (pNoeud->valeur < courant->valeur)
            courant = courant->gauche;
        else
            courant = courant->droite;
    } // end while

    // Maintenant on place le nouveau noeud dans la bonne branche
    if (pNoeud->valeur < precedent->valeur)
        precedent->gauche = pNoeud;
    else
        precedent->droite = pNoeud;
} // end process

// FONCTION      : Supprimer
// DESCRIPTION   : Supprime une pNoeud de l arbre
//      On peut obtenir un pointeur sur un pNoeud via la methode Rechercher(...);
template <class T>
void Cl_Arbre<T>::Supprimer(const T val)
{

    Cl_Noeud<T> *pNoeud = Rechercher(val);

    // Si le noeud est = NULL , on sort la valeur n'existe pas.
    if (!pNoeud)
    {
        cout << "Recherche infructueuse! impossible de trouver cette valeur." << endl;
        return;
    } // end if

    // Créations 3 pointeurs pour mémoriser
    // les paramétres de pointeurs du Noeuds à supprimer et la racine
    Cl_Noeud<T> *droite = pNoeud->droite;
    Cl_Noeud<T> *gauche = pNoeud->gauche;
    Cl_Noeud<T> *courant = racine;

    // CAS 1 : La valeur à supprimer est dans le noeud racine
    if (pNoeud == racine)
    {
        // On transfer le pointeur droite supérieur dans racine
        racine = droite;

        // Si le pointeur gauche du noeud supprimé n'est pas NULL,
        // Il faut réinsérer le noeud qui à été coupé par la suppression
        // pour reconstruire notre arbre
        if (gauche)
            Inserer(gauche);

        // On libere la mémoire du noeud contenant la valeur supprimée
        delete pNoeud;
        return;
    } // end if

    // CAS 2 : tous les autres cas
    //  on fait un balayage à travers l'arborescence
    while (courant)
    {
        // Si une des branches de ce noeud est celle que l'on recherche,
        // on sort de la boucle while
        if (courant->droite == pNoeud || courant->gauche == pNoeud)
            break;

        // Sinon, on continue
        if (pNoeud->valeur >= courant->valeur)
            courant = courant->droite;
        else
            courant = courant->gauche;
    } // end while

    if (courant->droite == pNoeud)
        courant->droite = droite;
    else
        courant->gauche = droite;
    // end if

    // Accrochage du fils du Noeud disparu
    if (gauche)
        Inserer(gauche);

    // Enfin, on libère l'objet pNoeud de la mémoire
    delete pNoeud;
    cout << "Noeud efface!" << endl;
} // end process

// FONCTION      : Rechercher
// DESCRIPTION   : Renvoie un pointeur sur un element
//      de l'arbre qui est == a val
template <class T>
Cl_Noeud<T> *Cl_Arbre<T>::Rechercher(const T val) const
{

    // Création d'un pointeur de mémorisation d'adresse de racine
    Cl_Noeud<T> *courant = racine;

    // Si la valeur du pointeur n'est pas NULL on continue
    while (courant)
    {
        // Si le Noeud a la bonne valeur,
        // on renvoie l'adresse du pointeur courant sinon on continue
        if (courant->valeur == val)
            return courant;

        // Si la valeur est inférieure, on control le noeud de droite
        // Si elle est supérieure, on contrôl le noeud de gauche
        if (val < courant->valeur)
            courant = courant->gauche;
        else
            courant = courant->droite;
    } // end while

    // Si rien trouvé  on retourne la valeur NULL
    return NULL;
} // end process

int main(void)
{
    // On cree un nouvel arbre, qui contiendra des entiers
    cout << "Creation d'un arbre" << endl;
    Cl_Arbre<char> arbre;

    // On le remplit de valeurs
    cout << "Remplissage de l'arbre" << endl;
    arbre.Creer('C');
    arbre.Creer('A');
    arbre.Creer('X');
    arbre.Creer('Z');
    arbre.Creer('T');
    arbre.Creer('I');
    arbre.Creer('H');
    arbre.Creer('M');

    // En affichant, on se rend compte que l arbre est trié
    cout << "Affichage de l'arbre" << endl;
    arbre.Affichage();
    arbre.Supprimer('Z');
    cout << "Affichage de l'arbre apres suppression de Z" << endl;
    arbre.Affichage();
    arbre.NbrNoeuds();
}