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
int CountDigitsFrequrnce(int Number, short checkNum)
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

void PrintAllDigitsFrequrnce(int Number)
{

    for (size_t i = 0; i < 10; i++)
    {
        short DigitsFrequrnce = 0;
        DigitsFrequrnce = CountDigitsFrequrnce(Number, i);

        if (DigitsFrequrnce > 0)
        {
            cout << " Digit " << i << " Frequency is " << DigitsFrequrnce << " Time(s) " << endl;
        }
    }
}

int main()
{
    PrintAllDigitsFrequrnce(ReadPositiveNumber("Enter Number"));

    return 0;
}