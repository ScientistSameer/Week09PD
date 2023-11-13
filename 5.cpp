#include <iostream>
using namespace std;

int countCommonCharacters(string s1, string s2)
{
    int commonCount = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            if (s1[i] == s2[j])
            {
                commonCount++;
                s2[j] = '*';
                break;
            }
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
