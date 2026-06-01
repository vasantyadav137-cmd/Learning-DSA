#include <iostream>
#include <vector> //Vector header file
using namespace std;
int main()
{
    // Declaring a vector
    vector<int> vec(0);
    // Insertion
    vec.push_back(6);
    vec.push_back(33);
    vec.push_back(68);
    vec.push_back(23);
    vec.push_back(56);
    vec.push_back(33);
    // Deleation
    vec.pop_back();
    // Printing the elements
    for (int x : vec)
    {
        cout << x << "  ";
    }
    // size
    cout << endl
         << vec.size();

    // Accesing the element
    cout << endl
         << vec[0] << endl
         << vec.at(4) << endl;

    return 0;
}