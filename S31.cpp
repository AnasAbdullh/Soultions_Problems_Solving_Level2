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
void Swap(int &A, int &B)
{
    int Temp = 0;
    Temp = A;
    A = B;
    B = Temp;
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
        Array[i] = i + 1;
    }
}
void PrintArray(int Array[100], int Length)
{
    for (size_t i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
}
void SufflutArray(int Array[100], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        Swap(Array[RandomNumber(1, length) - 1], Array[RandomNumber(1, length) - 1]);
    }
}

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    int lengthNumber = ReadPositiveNumber("Enter lenth the Array ?");
    int NumtoUsr[100];

    FillArraywhitNumber(NumtoUsr, lengthNumber);
    cout << "\nArray : \n";
    PrintArray(NumtoUsr, lengthNumber);

    SufflutArray(NumtoUsr, lengthNumber);
    cout << "\nSwap Random : \n";
    PrintArray(NumtoUsr, lengthNumber);

    return 0;
}