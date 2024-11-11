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
void FillArraywhitNumber(int Array[100], int &Length)
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
}
void ArrayTwo(int arr2[100], int Length)
{
    for (size_t i = 0; i < Length; i++)
    {
        arr2[i] = RandomNumber(1, 100);
    }
}
void SumTwoArray(int ArraySource[100], int TwoArray[100], int SumArray[100], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        SumArray[i] = TwoArray[i] + ArraySource[i];
    }
}
int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    int lengthNumber = ReadPositiveNumber("Enter lenth the Array ?");

    int arr[100], arr2[100], arrSum[100];

    FillArraywhitNumber(arr, lengthNumber);
    FillArraywhitNumber(arr2, lengthNumber);

    cout << "\n the Array Elements : ";
    PrintArray(arr, lengthNumber);

    cout << "\n the Arra Two : ";
    PrintArray(arr2, lengthNumber);

    SumTwoArray(arr, arr2, arrSum, lengthNumber);
    cout << "\n Sum of Array ";
    PrintArray(arrSum, lengthNumber);

    return 0;
}