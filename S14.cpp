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

void InvertedLetter(int Number)
{
    for (size_t i = Number + 65 - 1; i >= 65; i--)
    {
        for (size_t count = 1; count <= Number - (Number + 65 - 1 - i); count++)
        {
            cout << (char)i;
        }
        cout << "\n";
    }
}
int main(int argc, char const *argv[])
{
    InvertedLetter(ReadPositiveNumber("Enter Number"));

    return 0;
}
