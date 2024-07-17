#include <iostream>
using namespace std;

int main()
{
    int a, b, d;
    a = 1;
    cout << "square: ";
    cin >> b;
    while (a <= b)
    {
        d = 1;
        while (d <= b)
        {
            char e = 'A' + a - 1;
            cout << e;
            d += 1;
        }
        cout << endl;
        a += 1;
    }
}
// AAAAAAAAA
// BBBBBBBBB
// CCCCCCCCC
// DDDDDDDDD
// EEEEEEEEE
// FFFFFFFFF
// GGGGGGGGG
// HHHHHHHHH
// IIIIIIIII