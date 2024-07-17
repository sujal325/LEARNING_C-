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
            d -= 1;
            c += 1;
        }
        cout << endl;
        a += 1;
    }
}
// 1
// 21
// 321
// 4321
// 54321
// 654321
// 7654321
// 87654321
// 987654321