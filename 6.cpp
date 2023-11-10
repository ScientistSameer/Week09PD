#include <iostream>
using namespace std;

int coloringTime(string colors[], int size)
{
    int time = 2;

    for (int i = 1; i < size; ++i)
    {
        if (colors[i] != colors[i - 1])
        {
            time += 1;
        }
        time += 2;
    }

    return time;
}

int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid input size." << endl;
        return 0;
    }

    string colors[size];
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> colors[i];
    }

    int totalTime = coloringTime(colors, size);

    cout << "Time to color: " << totalTime << " seconds" << endl;

    return 0;
}
