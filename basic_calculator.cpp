#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}
int substract(int num1, int num2)
{
    int substract;
    substract = num1 - num2;
    return substract;
}
int multiply(int num1, int num2)
{
    int multiply;
    multiply = num1 * num2;
    return multiply;
}
int main()
{
    int num1, num2;
    cout << "first number: ";
    cin >> num1;
    cout << "second number: ";
    cin >> num2;
    int add = sum(num1, num2);
    int sub = substract(num1, num2);
    int mul = multiply(num1, num2);
    cout << "add is equal to: " << add << endl;
    cout << "substract is equal to: " << sub << endl;
    cout << "multiply is equal to: " << mul << endl;
    return 0;
}