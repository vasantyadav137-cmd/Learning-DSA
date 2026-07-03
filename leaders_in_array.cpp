#include <bits/stdc++.h>
using namespace std;

// vector<int> leader(vector<int> arr)
// {
//     vector<int> ans;
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         int temp = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 temp = 0;
//                 break;
//             }
//         }
//         if (temp == 1)
//         {
//             ans.push_back(arr[i]);
//         }
//     }
// reverse(ans.begin(), ans.end());
//     return ans;
// }
vector<int> leader(vector<int> arr)
{
    vector<int> ans;
    int n = arr.size(), max = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (max < arr[i])
        {
            max = arr[i];
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> array = {9, 5, 8, 1, 2, 4, 3};
    vector<int> leaders = leader(array);
    for (int i : leaders)
    {
        cout << i << " ";
    }
    return 0;
}