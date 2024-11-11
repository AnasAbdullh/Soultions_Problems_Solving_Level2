#include <iostream>
#include <cmath>
using namespace std;
enum enPrimeOrNotPrime
{

    Prime = 1,
    NotPrime = 2
};
short ReadNUmberPositive(string Message)
{
    short Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
enPrimeOrNotPrime CheckPrime(short Num)
{
    int M = (Num / 2);

    for (short i = 2; i <= M; i++)
    {
        if (Num % i == 0)
        {
            return enPrimeOrNotPrime::NotPrime;
        }
    }
    return enPrimeOrNotPrime::Prime;
}
void PrintPrime(short Number)
{
    cout << "\n";
    cout << "Prime Number From :" << 1 << " To " << Number;
    cout << " are : " << endl;
    for (short i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimeOrNotPrime::Prime)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    PrintPrime(ReadNUmberPositive(" Enter Number "));
    return 0;
}