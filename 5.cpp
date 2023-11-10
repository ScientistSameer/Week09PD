#include <iostream>
using namespace std;

int countCommonCharacters(string s1, string s2)
{
    int charCount[26] = {0};
    for (int i = 0; i < s1.length(); ++i)
    {
        char ch = s1[i];
        charCount[ch - 'a']++;
    }

    int commonCount = 0;
    for (int i = 0; i < s2.length(); ++i)
    {
        char ch = s2[i];
        if (charCount[ch - 'a'] > 0)
        {
            commonCount++;
            charCount[ch - 'a']--;
        }
    }

    return commonCount;
}

int main()
{
    string s1, s2;

    cout << "Enter the first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    int commonCount = countCommonCharacters(s1, s2);

    cout << "Number of common characters: " << commonCount << endl;

    return 0;
}
