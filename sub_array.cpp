#include <iostream>
#include <vector>
using namespace std;
int main()
{ // printing all posible sun-array
    vector<int> vec = {9, 6, 5, 3, 1};
    int size = vec.size();

    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << vec[i];
            }
            cout << "   ";
        }
        cout << endl;
    }

    return 0;
}