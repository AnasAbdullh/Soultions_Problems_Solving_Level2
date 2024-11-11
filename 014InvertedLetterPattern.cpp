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
    char count = 64 + Number;

    while (Number >= 1)
    {
        for (short i = 1; i <= Number; i++)
        {
            cout << count;
        }
        cout << "\n";
        count--;
        Number--;
    }
}
int main(int argc, char const *argv[])
{
    InvertedNumber(ReadPositiveNumber("Enter Number"));

    return 0;
}
