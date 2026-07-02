#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
string two_sum(int arr[], int size, int sum)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        int req = sum - arr[i];
        if (mpp.find(req) != 0)
        {
            cout << "ELements are " << arr[i] << " " << req << endl
                 << "Index are " << i << " " << mpp[req] << endl;
            return "Yes";
        }
        mpp[arr[i]] = i;
    }
    return "NO";
}
int main()
{
    int array[] = {9, 4, 3, 7, 2, 8, 5};
    cout << two_sum(array, 7, 9);
    return 0;
}