#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    i = 1;
    cout << "box: ";
    cin >> k;
    while (i <= k)
    {
        j = 1;
        while (j <= k)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
// *******
// *******
// *******
// *******
// *******
// *******
// *******