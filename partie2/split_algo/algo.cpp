#include <bits/stdc++.h>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std;

void translateAlgo(string str)
{
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Traduction de : \n" + str << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    string si = "if";
    string alors = "then";
    string fi = "";
    string pour = "for";
    string faire = "do";

    str.replace(str.find("si"), 2, si);
    str.replace(str.find("alors"), 5, alors);
    str.replace(str.find("fi"), 2, fi);
    str.replace(str.find("pour"), 4, pour);
    str.replace(str.find("faire"), 5, faire);

    cout << "Resultat : \n" + str << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
}

void translateEntete(string str)
{
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Traduction de l'entete : \n" + str << endl;
    cout << "-------------------------------------------------------------------------------" << endl;

    string pub = "public";
    string priv = "private";
    string protec = "protected";
    string entier = "int";
    string chaine = "string";
    string module = "void";

    str.replace(str.find("Module"), 6, module);
    str.replace(str.find("+"), 1, pub);
    // str.replace(str.find("-"), 1, priv);
    // str.replace(str.find("#"), 1, protec);
    str.replace(str.find("entier"), 6, entier);
    str.replace(str.find("chaine"), 6, chaine);

    cout << "Resultat : \n" + str << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
}