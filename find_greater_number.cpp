#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    if (a > b)
    {
        cout << "A is greater than B." << endl;
    }
    else
    {
        cout << "B is greater than A." << endl;
    }
}