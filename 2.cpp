#include <iostream>

using namespace std;

string containsSeven(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        while (numbers[i] != 0)
        {
            if (numbers[i] % 10 == 7)
            {
                return "Boom!";
            }
            numbers[i] /= 10;
        }
    }
    return "there is no 7 in the array";
}

int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    string result = containsSeven(numbers, size);
    cout << result << endl;

    return 0;
}
