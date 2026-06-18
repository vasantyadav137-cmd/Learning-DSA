#include <iostream>
#include <vector>
using namespace std;
// Selection sorting
void selection_sorting(vector<int> arr)
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
}
int main()
{
    vector<int> arr = {9, 6, 5, 3, 1, 7};
    selection_sorting(arr);
    return 0;
}