#include <iostream>
using namespace std;

int main()
{
    int a, n;
    cout << "Give number: ";
    cin >> a;
    int i = 2;
    while (i < a)
    {
        if (a % i == 0)
        {
            n = 1;
            break;
        }
        else
        {
            n = 0;
        }
        i += 1;
    }
    if (n == 1)
    {
        cout << "It is not a prime number.";
    }
    else
    {
        cout << "It is a prime number.";
    }
}