#include <iostream>
using namespace std;
int main()
{
    int a, b, n, c;
    a = 0;
    b = 1;
    c = 0;
    cout << "FB: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        b = a;
        a = c;
        cout << c<<" ";
    }
}