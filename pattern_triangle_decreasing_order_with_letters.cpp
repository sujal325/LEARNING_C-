#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, n;
    a = 1;
    cout << "square: ";
    cin >> b;
    n = b - 1;
    while (a <= b)
    {
        c = 0;
        d = 1;
        while (d <= a)
        {
            char e = 'A' + n + c;
            cout << e;
            c += 1;
            d += 1;
        }
        cout << endl;
        n -= 1;
        a += 1;
    }
}
// I
// HI
// GHI
// FGHI
// EFGHI
// DEFGHI
// CDEFGHI
// BCDEFGHI
// ABCDEFGHI