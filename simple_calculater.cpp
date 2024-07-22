#include <iostream>
using namespace std;

void addition(int num1, int num2)
{
    int a;
    a = num1 + num2;
    cout << a;
}
void substraction(int num1, int num2)
{
    int s;
    s = num1 + num2;
    cout << s;
}
void multiplication(int num1, int num2)
{
    int m;
    m = num1 + num2;
    cout << m;
}
void division(int num1, int num2)
{
    int d;
    d = num1 / num2;
    cout << d;
}
int main()
{
    int num1, num2, operation;
    cout << "first integer: ";
    cin >> num1;
    cout << "second integer: ";
    cin >> num2;
    cout << "what you want to do for addition (1),substraction (2),multiplication (3),division (4): ";
    cin >> operation;
    if (operation == 1)
    {
        cout << "addition = ";
        addition(num1, num2);
    }
    if (operation == 2)
    {
        cout << "substraction = ";
        substraction(num1, num2);
    }
    if (operation == 3)
    {
        cout << "multiplication = ";
        multiplication(num1, num2);
    }
    if (operation == 4)
    {
        cout << "division = ";
        division(num1, num2);
    }
    return 0;
}