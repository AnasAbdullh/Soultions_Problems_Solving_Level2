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
    for (size_t i = 1; i <= Number; i++)
    {
        for (size_t count = 1; count <= i; count++)
        {
            cout << i;
        }
        cout << "\n";
    }
}
int main(int argc, char const *argv[])
{
    InvertedNumber(ReadPositiveNumber("Enter Number"));

    return 0;
}
