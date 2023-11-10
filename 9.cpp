#include <iostream>
using namespace std;

bool isValidWord(string words)
{
    for (int i = 0; i < words.length(); i++)
    {
        char c = words[i];
        if (c == 'k' || c == 'm' || c == 'v' || c == 'w' || c == 'x')
        {
            return false;
        }
    }
    return true;
}

string longest7SegmentWord(string words[], int numWords)
{
    string longestWord;

    for (int i = 0; i < numWords; i++)
    {
        if (isValidWord(words[i]) && words[i].length() > longestWord.length())
        {
            longestWord = words[i];
        }
    }

    return longestWord;
}

int main()
{
    int numWords;
    cout << "Enter the number of words: ";
    cin >> numWords;

    string words[numWords];

    cout << "Enter the words, one by one:" << endl;
    for (int i = 0; i < numWords; i++)
    {
        cin >> words[i];
    }

    string result = longest7SegmentWord(words, numWords);

    if (result.empty())
    {
        cout << "" << endl;
    }
    else
    {
        cout << "Longest 7-segment word: " << result << endl;
    }

    return 0;
}
