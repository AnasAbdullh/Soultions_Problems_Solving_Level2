
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
    for (size_t i = 1; i <= Number; i++)
    {
        if (IsPerfectNumber(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintPerfectOrNotPerfect(ReadPositiveNumber("Please Enter Number"));
    return 0;
}
