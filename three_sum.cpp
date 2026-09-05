#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<vector<int>> three_sum(vector<int> arr, int n)
{
    set<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int third = -(arr[i] + arr[j]);
            auto it = find(arr.begin(), arr.end(), third);

            if (it != arr.end() && (it - arr.begin() != i && it - arr.begin() != j))
            {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                ans.insert(temp);
                temp.clear();
            }
        }
    }
    return vector<vector<int>>(ans.begin(), ans.end());
}
int main()
{
    vector<int> arr = {5, -4, -1, 3, 2, -5, 0};
    vector<vector<int>> ans = three_sum(arr, arr.size());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}