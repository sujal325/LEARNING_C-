#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    a = 1;
    cout << "Triangle: ";
    cin >> b;
    while (a <= b)
    {
        int c = 1;
        d = a;
        while (c <= a)
        {
            cout << d;
            d += 1;
            c += 1;
        }
        cout << endl;
        a += 1;
    }
}
// 1
// 23
// 345
// 4567
// 56789
// 67891011
// 78910111213
// 89101112131415
// 91011121314151617