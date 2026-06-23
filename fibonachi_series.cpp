#include <iostream>
using namespace std;
// Printing nth element of fibonabhi series
int fb_element(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fb_element(n - 1) + fb_element(n - 2);
}
// printing fibonachi series
void fb(int a, int b, int n)
{
    if (n == 0)
        return;
    else
    {
        cout << a << "  ";
        fb(b, a + b, n - 1);
    }
}

int main()
{
    int n = 9;

    cout << "The elemnet is " << fb_element(n) << endl
         << "The fibonachi series till nth term is :" << endl;
    fb(0, 1, n);
    return 0;
}
