// C++ program to print words in a sentence
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using std::cout; using std::cin;
using std::endl; using std::string;
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
    string str = "si condition alors condition fi";
    removeDupWord(str);

    string input = "si condition alors condition fi";
    string si = "if";
    string alors = "then";
    string fi = "";

    cout << input << endl;

    input.replace(input.find("si"), 2, si);
    input.replace(input.find("alors"), 5, alors);
    input.replace(input.find("fi"), 2, fi);
    removeDupWord(input);

    cout << input << endl;

    return EXIT_SUCCESS;

    return 0;
}
