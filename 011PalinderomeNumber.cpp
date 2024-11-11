#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int RevernceNumber(int Number)
{
    int Remainder = 0, count = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        count = count * 10 + Remainder;
    }
    return count;
}
bool IsPalinderome(int Number)
{
    return Number == RevernceNumber(Number);
}

int main(int argc, char const *argv[])
{
    if (IsPalinderome(ReadPositiveNumber("Enter Number")))
        cout << " Yes Palinderome " << endl;
    else
        cout << " Not Palinderome " << endl;

    return 0;
}
