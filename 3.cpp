#include <iostream>

using namespace std;

bool areAllElementsIdentical(string elements[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (elements[i] != elements[0])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    string elements[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> elements[i];
    }

    int result = areAllElementsIdentical(elements, size);
    cout << result << endl;

    return 0;
}
