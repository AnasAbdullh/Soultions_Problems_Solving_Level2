#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int RandomNumber(int From, int To)
{
    int randNUmber = rand() % (To - From + 1) + From;
    return randNUmber;
}
void ReadyFillArraywhitNumber(int Array[100], int &Length)
{
    cout << "Enter The Elements Array " << endl;
    cin >> Length;
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
void SumTwoArray(int TwoArray[100], int ArraySource[100], int SumArray[100], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        SumArray[i] = TwoArray[i] + ArraySource[i];
    }
}
int main(int argc, char const *argv[])
{
      srand((unsigned)time(NULL));

    int Array[100], length, TwoArray[100], sumArray[100];

    ReadyFillArraywhitNumber(Array, length);

    ArrayTwo(TwoArray, length);
    SumTwoArray(TwoArray, Array, sumArray, length);
    
    cout << "The Elements Number " << ": ";
    PrintArray(Array, length);
    cout << endl;

    cout << "The Array Two : ";
    PrintArray(TwoArray, length);

    cout << "\nArray 2 elements after Sum : ";
    PrintArray(sumArray, length);

    return 0;
}