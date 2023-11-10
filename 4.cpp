#include <iostream>
using namespace std;

void evenOddTransform(int array[], int size, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] % 2 == 0)
            {
                array[j] -= 2;
            }
            else
            {
                array[j] += 2;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
    }

    int n;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;

    evenOddTransform(array, size, n);

    cout << "[";
    for (int i = 0; i < size - 1; i++)
    {
        cout << array[i] << ", ";
    }
    cout << array[size - 1] << "]";

    return 0;
}
