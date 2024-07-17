#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    a = 1;
    cout << "square: ";
    cin >> b;
    while (a <= b)
    {
        d = 1;
        c = a;
        while (d <= a)
        {
            char e = 'A' + c - 1;
            cout << e;
            d += 1;
            c += 1;
        }
        cout << endl;
        a += 1;
    }
}
// A
// BC
// CDE
// DEFG
// EFGHI
// FGHIJK
// GHIJKLM