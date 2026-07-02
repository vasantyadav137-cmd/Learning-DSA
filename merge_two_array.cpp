//  With in this program I have merged two sorted array into a single array whith unique element sorted
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
// This was using maping
vector<int> merge(int arr1[], int arr2[], int s1, int s2)
{
    map<int, int> mpp;
    vector<int> array;
    for (int i = 0; i < s1; i++)
    {
        mpp[arr1[i]]++;
    }
    for (int i = 0; i < s2; i++)
    {
        mpp[arr2[i]]++;
    }
    for (auto &v : mpp)
    {
        array.push_back(v.first);
    }
    return array;
}
// Using sets
vector<int> un(int arr1[], int arr2[], int s1, int s2)
{
    set<int> s;
    for (int i = 0; i < s1; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < s2; i++)
    {
        s.insert(arr2[i]);
    }
    vector<int> arr(s.begin(), s.end());

    return arr;
}
int main()
{
    int array1[] = {5, 4, 7, 9, 3, 5, 6, 7};
    int array2[] = {6, 8, 3, 9, 5, 3};
    // using map
    vector<int> array = merge(array1, array2, 8, 6);
    for (int x : array)
    {
        cout << x << " ";
    }
    cout << endl;
    // uisng set
    vector<int> arr = un(array1, array2, 8, 6);
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
