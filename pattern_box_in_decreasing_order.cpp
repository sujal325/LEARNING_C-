#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "box: ";
    cin >> a;
    b = 1;
    while (b <= a)
    {
        c = 1;
        int d = a;
        while (c <= a)
        {
            cout << d;
            d -= 1;
            c += 1;
        }
        cout << endl;
        b += 1;
    }
}
// 987654321
// 987654321
// 987654321
// 987654321
// 987654321
// 987654321
// 987654321
// 987654321
// 987654321