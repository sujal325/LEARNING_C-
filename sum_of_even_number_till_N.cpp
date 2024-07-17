#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b;
    cout << "Give the value of N: ";
    cin >> b;
    int sum = 0;
    while (a <= b)
    {
        sum += a;
        a += 2;
    }
    cout << sum;
}