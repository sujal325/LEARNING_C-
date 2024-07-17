#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    a = 1;
    d = 1;
    cout << "Triangle: ";
    cin >> b;
    while (a <= b)
    {
        c = 1;
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
// 456
// 78910
// 1112131415
// 161718192021
// 22232425262728
// 2930313233343536
// 373839404142434445