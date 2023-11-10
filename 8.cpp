#include <iostream>

using namespace std;

bool isCharInString(char c, string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
        {
            return true;
        }
    }
    return false;
}

string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string brokenKeys;
    string visitedKeys;

    for (int i = 0; i < correctPhrase.length(); i++)
    {
        if (correctPhrase[i] != actualTyped[i] && !isCharInString(correctPhrase[i], visitedKeys))
        {
            brokenKeys += correctPhrase[i];
            visitedKeys += correctPhrase[i];
        }
    }
    return brokenKeys;
}

int main()
{
    string correctPhrase, actualTyped;

    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);

    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);

    string brokenKeys = findBrokenKeys(correctPhrase, actualTyped);
    cout << "Broken keys: " << brokenKeys << endl;

    return 0;
}
