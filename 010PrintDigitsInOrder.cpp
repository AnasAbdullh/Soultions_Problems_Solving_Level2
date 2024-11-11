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
void DigtidNumber(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        cout << Remainder << endl;
    }
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

int main()
{
    DigtidNumber(RevernceNumber(ReadPositiveNumber("Enter Number")));

    return 0;
}
