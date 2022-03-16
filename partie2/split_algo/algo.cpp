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
    cout << "-------------------------------------------------" << endl;
    cout << "Traduction de : " + str << endl;
    cout << "-------------------------------------------------" << endl;
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

    cout << str << endl;
    cout << "-------------------------------------------------" << endl;
}
