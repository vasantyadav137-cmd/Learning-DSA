#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {
        1,
        1,
        1,
        4,
        5,
        0,
        1,
        1,
        1,
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0,
        max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        if (count > max)
        {
            max = count;
        }
        if (arr[i] != 1)
        {
            count = 0;
        }
    }
    cout << count;
    return 0;
}