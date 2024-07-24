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
        int x = 1;
        for (int b = 1; b <= breadth; b++)
        {
            cout <<x;
            x++;
        }
        cout << endl;
    }
}

// 12345
// 12345
// 12345
// 12345