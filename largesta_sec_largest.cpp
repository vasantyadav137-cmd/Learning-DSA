#include <iostream>
using namespace std;

void largest(int array[], int size)
{
    if (size < 2)
    {
        cout << "Underflow\n";
        return;
    }

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > largest)
        {
            second = largest;
            largest = array[i];
        }
        if (array[i] > second && array[i] != largest)
        {
            second = array[i];
        }
    }

    cout << "Largest element is " << largest << endl;
    cout << "Second largest element is " << second << endl;
}

int main()
{
    int array[] = {9, 3, 6, 3, 6, 9, 9, 3, 6};
    int size = sizeof(array) / sizeof(array[0]);

    largest(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}