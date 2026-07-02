#include <iostream>
#include <algorithm>
using namespace std;
// Using kadane's algorithm
int max_sum_subarray(int array[], int size)
{
    int sum = 0, max_subarray = INT_MIN, start, end;
    for (int i = 0; i < size; i++)
    {
        if (sum == 0)
            start = i, end = i;
        else
            end++;
        sum += array[i];
        max_subarray = max(max_subarray, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    // if (max_subarray == 0)
    // {
    //     max_subarray = *(array, array + size);
    // }
    if (max_subarray >= 0)
    {
        cout << start << " " << end << endl;
    }
    return max_subarray;
}
int main()
{
    int arr[] = {-7, -6, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << max_sum_subarray(arr, size);
    return 0;
}