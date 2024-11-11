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
    int array[2] = {Number + 65 - 1, 65};
    for (size_t i = 65; i <= Number + 65 - 1; i++)
    {
        for (size_t count = 1; count <= i - 65 + 1; count++)
        {
            cout << (char)i;
        }
        cout << "\n";
    }
}
int main(int argc, char const *argv[])
{
    InvertedNumber(ReadPositiveNumber("Enter Number"));

    return 0;

}
