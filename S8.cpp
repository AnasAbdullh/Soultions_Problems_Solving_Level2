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

int main()
{
    int Number = ReadPositiveNumber("Enter Number ");
    int SumOfNumber = ReadPositiveNumber("Enter check Number ");

    cout << SumNumber(Number, SumOfNumber) << endl;

    return 0;
}