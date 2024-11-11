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
void PrintCopyArray(int Array[100], int Length)
{
    for (size_t i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    int Array[100], length;
    ReadyFillArraywhitNumber(Array, length);
    cout << "The Elements Number " << ": ";
    PrintArray(Array, length);
    cout << "\nArray 2 elements after copy : ";
    PrintCopyArray(Array,length);

    return 0;
}
