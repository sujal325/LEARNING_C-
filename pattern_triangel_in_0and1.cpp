#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    a = 1;
    cout << "triangle: ";
    cin >> b;
    while (a <= b)
    {
        d = 1;
        c = a;
        while (d <= a)
        {
            cout << d%2;
            d += 1;
            c += 1;
        }
        cout << endl;
        a += 1;
    }
}

// 1
// 10
// 101
// 1010
// 10101