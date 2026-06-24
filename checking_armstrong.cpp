#include <iostream>
#include <cmath>
using namespace std;
int Count_digit(int n)
{
    return floor(log10(abs(n))) + 1;
}
int expo(int num, int power)
{
    int j = 0, ans = 1;
    while (j < power)
    {
        ans *= num;
        j++;
    }
    return ans;
}
bool armstrong(int num)
{
    int value = 0, copy = num;
    int power = Count_digit(num);
    while (copy > 0)
    {
        value += expo(copy % 10, power);
        copy /= 10;
    }
    return value == num;
}
int main()
{
    cout << armstrong(9474);
    return 0;
}