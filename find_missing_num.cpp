// Finding the missing number when the array begain from 1 to N
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void find(int arr[], int size, int max)
{
    vector<int> vec(max, 0);
    for (int i = 0; i < size; i++)
    {
        vec[arr[i] - 1]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (vec[i] == 0)
        {
            cout << i + 1 << " ";
        }
    }
}
int main()
{
    int arr[] = {9, 5, 6, 6, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxVal = *max_element(arr, arr + size);
    find(arr, size, maxVal);

    return 0;
}