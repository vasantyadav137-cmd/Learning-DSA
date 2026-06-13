#include <iostream>
// library for list
#include <list>
using namespace std;
int main()
{
    // Declaration
    list<int> ls;
    // insertion
    // in list insertin take place only from both end
    ls.push_back(9);
    ls.push_front(6);
    ls.push_back(4);
    // elements can be printed from both end there is no option to in between elements directly
    cout
        << ls.front() << "  " << ls.back();
    ls.reverse();
    for (int i : ls)
    {
        cout << i << "  ";
    }
    return 0;
}