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
bool IsPerfectNumber(int Number)
{
    short sum = 0;
    short mdime = (Number / 2);
    for (short i = 1; i <= mdime; i++)
    {
        //  cout << i << endl;
        if (Number % i == 0)
        {

            sum += i;
        }
    }

    return Number == sum;
}
void PrintPerfectOrNotPerfect(int Number)
{

    if (IsPerfectNumber(Number))
    {
        cout << Number << " It is Perfect" << endl;
    }
    else
    {
        cout << Number << " It is Not Perfect" << endl;
    }
}

int main()
{
    PrintPerfectOrNotPerfect(ReadPositiveNumber("Please Enter Number"));
    return 0;
}
