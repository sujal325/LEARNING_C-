#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = 1;
    cout << "box: ";
    cin >> c;
    while (a <= c)
    {
        b = 1;
        while (b <= c)
        {
            cout << a;
            b += 1;
        }
        cout << endl;
        a += 1;
    }
}
// 11111111
// 22222222
// 33333333
// 44444444
// 55555555
// 66666666
// 77777777
// 88888888