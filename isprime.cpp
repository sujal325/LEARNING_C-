#include <iostream>
using namespace std;

int isprime(int n)
{
    int value;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            value = 0;
            break;
        }
        else
        {
            value = 1;
        }
    }
    return value;
}
int main()
{
    int a, v;
    cin >> a;
    v = isprime(a);
    if (v == 0)
    {
        cout << "Not prime number.";
    }
    else
    {
        cout << "Prime number.";
    }
}

// 7
// Prime number.