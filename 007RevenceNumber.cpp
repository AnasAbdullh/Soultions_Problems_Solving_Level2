#include <iostream>
using namespace std;

int ReadPostitiveNumber(string Message)
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
int main()

{
    cout << RevernceNumber(ReadPostitiveNumber("Enter Number Positive")) << endl;

    return 0;
}
