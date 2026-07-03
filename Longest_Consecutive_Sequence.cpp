#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
// brute force approch
// bool liner_search(vector<int> array, int num)
// {
//     int n = array.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (num == array[i])
//             return true;
//     }
//     return false;
// }

// int consecutive(vector<int> arr)
// {
//     int longest = 1, n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         int count = 1,
//             num = arr[i];
//         while (liner_search(arr, num + 1) == true)
//         {
//             count++;
//             num++;
//         }
//         longest = max(count, longest);
//     }
//     return longest;
// }

// better approch
// int consecative(vector<int> array)
// {
//     int longest = 1, count = 1, lastsmall = INT_MIN;
//     sort(array.begin(), array.end());
//     for (int i = 0; i < array.size() - 1; i++)
//     {

//         if (lastsmall + 1 == array[i])
//         {
//             count++;
//             longest = max(longest, count);
//             lastsmall = array[i];
//         }
//         else if (lastsmall != array[i] && lastsmall + 1 != array[i])
//         {
//             count = 1;
//             lastsmall = array[i];
//         }
//         }
//     return longest;
// }

// optimal approch
int consecutive(vector<int> array)
{
    unordered_set<int> st;
    int longest = 1;
    for (int i = 0; i < array.size(); i++)
    {
        st.insert(array[i]);
    }
    for (int it : array)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;
            while (st.find(x + 1) != 0)
            {
                count++;
                x++;
            }
            longest = max(count, longest);
        }
    }

    return longest;
}
int main()
{
    vector<int> array = {9, 5, 4, 7, 3, 8, 2, 3, 1, 0, 5, 8, 3};
    cout << consecutive(array);

    return 0;
}
