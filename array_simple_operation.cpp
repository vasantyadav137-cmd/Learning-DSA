#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array :    ";
    cin >> size;
    int array[size], max = INT_MIN, min = INT_MAX;

    // Taking the elements of array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element :      ";
        cin >> array[i];
    }
    cout << endl;
    // printing the element of array
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "   ";
    }
    cout << endl
         << endl;
    // Finding the biggeast element of array
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    cout << "Biggest element is " << max << endl
         << "Smallest elwment is " << min << endl;

    return 0;
}