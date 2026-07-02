// Selection shorting
#include <iostream>
#include <vector>

using namespace std;
void selection_sorting(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int small = INT_MAX, index;
        for (int j = i; j < arr.size(); j++)
        {
            if (small > arr[j])
            {
                small = arr[j];
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
}
int main()
{
    vector<int> array = {9, 6, 5, 7, 4, 8};
    selection_sorting(array);
    for (int x : array)
    {
        cout << x << " ";
    }

    return 0;
}