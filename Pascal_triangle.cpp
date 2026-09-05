#include <iostream>
#include <vector>
using namespace std;
int factorial(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans *= i;
    }
    return ans;
}
int element(int row, int col)
{
    col--, row--;
    if (row < col)
    {
        cout << "Invalid Element" << endl;
        return 0;
    }
    int ans = 1;
    for (int i = 0; i < col; i++)
    {
        ans *= (row - i);
    }
    return ans / factorial(col);
}
int main()
{
    cout << element(3, 3);
    return 0;
}