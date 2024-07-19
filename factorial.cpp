#include <iostream>
using namespace std;

int factorial(int i)
{
    int facto = 1;
    for (int n = 1; n <= i; n++)
    {
        facto *= n;
    }
    return facto;
}
int cal(int n, int r)
{
    int num1, num2, result;
    num1 = factorial(n);
    num2 = factorial(r) * factorial(n - r);
    result = num1 / num2;
    return result;
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int re = cal(a, b);
    cout << re;
}


// 10
// 3
// 120