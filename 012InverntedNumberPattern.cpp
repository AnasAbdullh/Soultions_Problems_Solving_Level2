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

void InvertedNumber(int Number)
{
    int Revence = 0;
    while (Number >= 1)
    {
        for (int count = Number; count >= 1; count--)
        {
            Revence = Revence * 10 + Number;
        }
        cout << Revence << endl;
        Revence = 0;
        Number--;
    }
}
int main(int argc, char const *argv[])
{
    InvertedNumber(ReadPositiveNumber("Enter Number"));

    return 0;
}
