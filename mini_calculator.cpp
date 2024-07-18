#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first intiger: ";
    cin >> a;
    cout << "Enter second intiger: ";
    cin >> b;
    char c;
    cout << "Enter your operation: ";
    cin >> c;

    switch (c)
    {
    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;

    case '%':
        cout << a % b << endl;
        break;

    default:
        cout << "Your operation is not correct.";
        break;
    }
}