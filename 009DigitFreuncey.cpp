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
int SumNumber(int Number, short checkNum)
{
    int count = 0, Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        if (checkNum == Remainder)
        {
            count++;
        }
    }
    return count;
}
void DigitFeruncy()
{
    int Number = 0, Result = 0, multiplies = 1;
    int input = ReadPositiveNumber("Enter Number");
    int Digits[10] = {0};

    Number = input;
    while (Number > 0)
    {
        int Digit = Number % 10;
        if (Digits[Digit] == 0)
        {
            Result += Digit * multiplies;
            multiplies *= 10;
            Digits[Digit] = Digits[Digit] = 1;
            cout << " Digit " << Digit << " Frequency is " << SumNumber(input, Digit) << " Time(s) " << endl;
        }
        Number /= 10;
    }
}
int main()
{
    DigitFeruncy();
    // int i = 10;
    // i == = 9;
    // cout << i << endl;

    return 0;
}
