#include <iostream>
using namespace std;
bool isLengthEven(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length % 2 == 0;
}

int main()
{
    char input[100];
    cout << "Enter a String: ";
    cin >> input;
    int result = isLengthEven(input);
    cout << result;
    return 0;
}
