#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int CouontSubarrays(vector<int> array, int k)
{
    unordered_map<int, int> m;
    int count = 0, sum = 0;
    m[0] = 1;
    for (int i = 0; i < array.size(); i++)
    {
        sum += array[i];
        int req = sum - k;
        if (m.find(req) != m.end())
        {
            count += m.find(req)->second;
        }
        m[sum]++;
    }
    return count;
}
int main()
{
    vector<int> array = {2, 2, 2, 3, 3, -6, 4, 2, 6};
    cout << CouontSubarrays(array, 6);
}
