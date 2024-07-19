#include <iostream>
using namespace std;

int e_or_o(int integer)
{
    if (integer % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int result, result_;
    cin >> result;
    result_ = e_or_o(result);
    cout << result_;
}

// 10
// 0