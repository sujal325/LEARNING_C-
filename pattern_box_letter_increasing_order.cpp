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
        c = 0;
        while (d <= b)
        {
            char e = 'A' + c;
            cout << e;
            d += 1;
            c += 1;
        }
        cout << endl;
        a += 1;
    }
}
// ABCDEFGHI
// ABCDEFGHI
// ABCDEFGHI
// ABCDEFGHI
// ABCDEFGHI
// ABCDEFGHI
// ABCDEFGHI
// ABCDEFGHI
// ABCDEFGHI