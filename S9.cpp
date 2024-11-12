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
int CountDigitsFrequency(int Number, short checkNum)
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
void PrintAllDigitsFrequency(int Number)
{

    for (size_t i = 0; i < 10; i++)
    {
        short DigitsFrequency = 0;
        DigitsFrequency = CountDigitsFrequency(Number, i);

        if (DigitsFrequency > 0)
        {
            cout << " Digit " << i << " Frequency is " << DigitsFrequency << " Time(s) " << endl;
        }
    }
}

int main()
{
    PrintAllDigitsFrequency(ReadPositiveNumber("Enter Number"));

    return 0;
}