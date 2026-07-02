#include <iostream>
#include <vector>
using namespace std;
void rearrange(int arr[], int size)
{
    int ans[size] = {0};
    int pos = 0, neg = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            ans[pos] = arr[i];
            pos += 2;
        }
        else
        {
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int array[] = {9, 5, 3, -5, -6, -1};
    int size = sizeof(array) / sizeof(array[0]);
    rearrange(array, size);
    return 0;
}