// C++ program to print words in a sentence
#include <bits/stdc++.h>
using namespace std;

void removeDupWord(string str)
{
    string word = "";
    const char *y = "";
    for (auto x : str)
    {
        if (x == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else if (y == "si")
        {
            cout << word << endl;
            word = "if";
        }
        else if (y == "alors")
        {
            cout << word << endl;
            word = "then";
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
    return 0;
}
