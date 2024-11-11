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
int SumNumberPerfect(int Number)
{
    short Sum = 0;
    for (short i = 1; Sum < Number; i++)
    {
        if (Number % i == 0)
        {
            Sum += i;
            //   cout << Sum << endl;
        }
    }
    return Sum;
}
string CheckNumberPerfectOrNotPerfect(int Number)
{
    if (SumNumberPerfect(Number) == Number)
    {
        return " is Perfect ";
    }
    else
    {
        return " is Not Perfect ";
    }
}
void PrintNumberPerfect()
{
    int InputNumber1 = ReadPositiveNumber("Enter Number One");
    int InputNumber2 = ReadPositiveNumber("Enter Number Two");

    cout << InputNumber1 << CheckNumberPerfectOrNotPerfect(InputNumber1) << endl;
    cout << InputNumber2 << CheckNumberPerfectOrNotPerfect(InputNumber2) << endl;
}
int main()

{
    PrintNumberPerfect();

    return 0;
}
