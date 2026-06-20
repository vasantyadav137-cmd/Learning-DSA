#include <iostream>
#include <vector>
using namespace std;
// Selection sorting
void selection_sorting(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 2; i++)
    {
        int min = i;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    for (int x : arr)
    {
        cout << x << "  ";
    }
    cout << endl;
}

// Bubble shorting
void Bubble_shorting(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i : arr)
    {
        cout << i << "  ";
    }
    cout << endl;
}

// INsertion shorting
void insertion_shorting(vector<int> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            arr[j] = key;
            j = j - 1;
        }
    }
    for (int i : arr)
    {
        cout << i << "  ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr1 = {9, 6, 5, 3, 1, 7};

    selection_sorting(arr1);

    vector<int> arr2 = {7, 9, 4, 8, 2, 1};

    insertion_shorting(arr2);
    vector<int> arr3 = {9, 1, 4, 5, 0, 3, 2};
    Bubble_shorting(arr3);
    return 0;
}