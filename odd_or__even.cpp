#include <iostream>
using namespace std;

void even_odd(int num)
{
    if (num % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}
int main()
{
    int num;
    cout << "type number: ";
    cin >> num;
    even_odd(num);
}