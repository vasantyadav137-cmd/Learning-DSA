#include <iostream>
#include <vector>
using namespace std;
int buy_sell(vector<int> arr)
{
    int profit = INT_MIN, buy = INT_MAX, sell = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        buy = min(buy, arr[i]);
        cout << buy << " ";
        sell = arr[i];
        cout << sell << " ";
        profit = max(sell - buy, profit);
        cout << profit << endl;
        ;
    }
    return profit;
}
int main()
{
    vector<int> stock = {2, 7, 8, 2, 9, 1, 2};
    cout << buy_sell(stock);
    return 0;
}