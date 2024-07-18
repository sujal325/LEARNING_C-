#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cout << "Sum: ";
    cin >> n;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    cout << s;
}
// Sum: 100
// 5050