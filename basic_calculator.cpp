#include <iostream>
using namespace std;
void addition(float num1, float num2);
void subtraction(float num1, float num2);
void product(float num1, float num2);
void division(float num1, float num2);

int main()
{
    float num1, num2;
    cout << "Enter first Number:" << endl;
    cin >> num1;
    cout << endl
         << "Enter Second number" << endl;
    cin >> num2;
    cout << "Choose one operation " << endl
         << "1. Addition" << endl
         << "2. Subtraction" << endl
         << "3. Multiplication" << endl
         << "4. Division" << endl
         << "5. All operation"
         << endl;
    int operation;
    cin >> operation;
    switch (operation)
    {
    case 1:
        addition(num1, num2);
        break;
    case 2:
        subtraction(num1, num2);
        break;
    case 3:
        product(num1, num2);
        break;
    case 4:
        division(num1, num2);
        break;
    case 5:
        addition(num1, num2);
        subtraction(num1, num2);

        product(num1, num2);
        division(num1, num2);
        break;
    default:
        cout << "Invalid Input";
    }

    return 0;
}
void addition(float num1, float num2)
{
    cout << "Sum of two number is " << num1 + num2 << endl;
}
void subtraction(float num1, float num2)
{
    cout << "Difference of two number is " << num1 - num2 << endl;
}
void product(float num1, float num2)
{
    cout << "Product of two number is " << num1 * num2 << endl;
}
void division(float num1, float num2)
{
    if (num1 == 0)
    {
        cout << "Division Not Possible";
    }
    else
        cout << "Division of two number is " << num1 / num2 << endl;
}