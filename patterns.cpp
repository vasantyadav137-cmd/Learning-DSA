#include <iostream>
using namespace std;
// Rectangular Star Pattern
void Rectangular_Star_Pattern()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "*";
            cout << "  ";
        }
        cout << endl;
    }
}

// Right-Angled Triangle Pattern
void right_angled_triangle()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < i; j++)
        {

            cout << "*" << "  ";
        }
        cout << endl;
    }
}
// Inverted Right Pyramid
void Inverted_Right_Pyramid()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 7; j > i; j--)
        {
            cout << "*" << " ";
                }
        cout << endl;
    }
}
int main()
{
    int option;
    while (1)
    {
        cout << "Choose the option" << endl;
        cout << "1 Rectangular Star Pattern" << endl
             << "2 Right-Angled Triangle Pattern" << endl
             << "3 Inverted Right Pyramid " << endl;
        cin >> option;
        cout << endl;
        switch (option)
        {
        case 1:
            Rectangular_Star_Pattern();
            break;
        case 2:
            right_angled_triangle();
            break;
        case 3:
            Inverted_Right_Pyramid();
            break;
        default:
            cout << "Enter the valid input";
        }
    }
    return 0;
}