#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Triangle: ";
    cin >> a;
    b = 1;
    while (b <= a)
    {
        c = 1;
        while (c <= b)
        {
            cout << "*";
            c += 1;
        }
        cout << endl;
        b += 1;
    }
}
// *
// **
// ***
// ****
// *****
// ******
// *******
// ********