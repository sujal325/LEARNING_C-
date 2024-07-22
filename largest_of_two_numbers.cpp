#include <iostream>
using namespace std;

void largest(int num1, int num2)
{
    if (num1 > num2)
    {
        cout << num1;
    }
    else
    {
        cout << num2;
    }
}
int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    largest(num1, num2);
}