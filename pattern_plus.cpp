#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter only odd integer to print this pattern: ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Enter only odd number.";
        return 1;
    }
    int b = a - 1;
    int c = b / 2;
    int d = c + 1;
    for (int i = 1; i <= a; i++)
    {
        if (i == d)
        {
            for (int i = 1; i <= a; i++)
            {
                cout << "*" << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= a; j++)
            {
                if (j == d)
                {
                    cout << "*" << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
}

//         *
//         *
//         *
//         *
// * * * * * * * * *
//         *
//         *
//         *
//         *