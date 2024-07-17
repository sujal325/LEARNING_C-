#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int b;
    cout << "Give number N: ";
    cin >> b;
    int sum = 0;
    while (i <= b)
    {
        sum += i;
        i += 1;
    }
    cout << sum;
}