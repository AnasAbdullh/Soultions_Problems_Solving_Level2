#include <iostream>
#include <string>
#include <cstdlib>

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
int RandomNumber(int From, int To)
{
    int randNUmber = rand() % (To - From + 1) + From;
    return randNUmber;
}
void FillArraywhitNumber(int Array[100], int Length)
{

    for (size_t i = 0; i < Length; i++)
    {
        Array[i] = RandomNumber(1, Length);
    }
}
void PrintArray(int Array[100], int Length)
{
    for (size_t i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
}
void PrintForm1ToNumberUsr(int Number[100], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        Number[i] = i + 1;
    }
}

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    int lengthNumber = ReadPositiveNumber("Enter lenth the Array ?");

    int NumtoUsr[100], Random[100];

    PrintForm1ToNumberUsr(NumtoUsr, lengthNumber);
    PrintArray(NumtoUsr, lengthNumber);
    cout << endl;
    FillArraywhitNumber(Random, lengthNumber);
    PrintArray(Random, lengthNumber);

    return 0;
}