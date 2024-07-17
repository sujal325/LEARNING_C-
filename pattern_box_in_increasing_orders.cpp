#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    a = 1;
    d = 1;
    cout << "box: ";
    cin >> b;
    while (a <= b)
    {
        int c = 1;
        while (c <= b)
        {
            cout << d;
            d += 1;
            c += 1;
        }
        cout << endl;
        a += 1;
    }
}

// 123
// 456
// 789