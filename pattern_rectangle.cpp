#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    cout << "length: ";
    cin >> length;
    cout << "breadth: ";
    cin >> breadth;
    for (int i = 1; i <= length; i++)
    {
        for (int b = 1; b <= breadth; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// *****
// *****
// *****
// *****