#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "algo.cpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std;

void removeDupWord(string str)
{
    string word = "";
    for (auto x : str)
    {
        if (x == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else
        {
            word = word + x;
        }
    }
    cout << word << endl;
}

// Driver code
int main()
{
    // string str = "si condition alors consequence fi";
    // translateAlgo(str);

    string str2 = "si condition alors consequence pour(int i=0, i<=2, i++) faire action fi";
    translateAlgo(str2);

    cout << "\n" << endl;

    string str = " + Module Algorithme(nombre entier, texte chaine, nombre2 double);";
    translateEntete(str);

    // removeDupWord(str);

    // string input = "si condition alors consequence fi";
    // string si = "if";
    // string alors = "then";
    // string fi = "";

    // cout << "-------------------------------------------------" << endl;
    // cout << input << endl;
    // cout << "-------------------------------------------------" << endl;

    // input.replace(input.find("si"), 2, si);
    // input.replace(input.find("alors"), 5, alors);
    // input.replace(input.find("fi"), 2, fi);
    // removeDupWord(input);

    // cout << "-------------------------------------------------" << endl;
    // cout << input << endl;

    // return EXIT_SUCCESS;

    return 0;
}
