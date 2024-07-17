#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = 1;
    cout << "Triangle: ";
    cin >> b;
    while (a <= b)
    {
        c = 1;
        while (c <= a)
        {
            cout << a;
            c += 1;
        }
        cout << endl;
        a += 1;
    }
}
// 1
// 22
// 333
// 4444
// 55555
// 666666
// 7777777
// 88888888
// 999999999