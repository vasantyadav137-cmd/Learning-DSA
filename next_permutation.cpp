#include <iostream>
#include <algorithm>

using namespace std;
void nextPermutation(int arr[], int size)
{

    int index = -1;
    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(arr, arr + size);
        return;
    }
    for (int i = size - 1; i > index; i--)
    {
        if (arr[index] < arr[i])
        {
            swap(arr[index], arr[i]);
            break;
        }
    }
    reverse(arr + index + 1, arr + size);
}

int main()
{
    int array1[] = {9, 5, 3, 2, 7, 4};
    int array[] = {9, 5, 3, 2, 7, 4};
    int size = sizeof(array) / sizeof(array[0]);
    nextPermutation(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    next_permutation(array1, array1 + size);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array1[i] << " ";
    }

    return 0;
}