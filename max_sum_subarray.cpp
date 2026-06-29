#include <iostream>
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
    cout << start << " " << end << endl;
    return max_subarray;
}
int main()
{
    int arr[] = {9, 6, 5, 4, 3, -32, 21, 4, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << max_sum_subarray(arr, size);
    return 0;
}