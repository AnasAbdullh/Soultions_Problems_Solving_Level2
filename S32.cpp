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
        Array[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int Array[100], int Length)
{
    for (size_t i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
    cout << "\n";
}
void Reverse(int Array[100], int arrayer[100], int length)
{

    for (short i = length - 1; i >= 0; i--)
    {
        arrayer[i] = Array[length - 1 - i];
    }
}

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    int lengthNumber = ReadPositiveNumber("Enter lenth the Array ?");
    int Array[100], ArrayReverse[100];

    FillArraywhitNumber(Array, lengthNumber);

    PrintArray(Array, lengthNumber);

    Reverse(Array, ArrayReverse, lengthNumber);

    cout << endl;
    PrintArray(ArrayReverse, lengthNumber);

    return 0;
}