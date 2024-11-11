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
int SumOfrandomArray(int array[100], int lenthg)
{
    int count = 0;

    for (size_t c = 0; c < lenthg; c++)
    {
        count += array[c];
    }
    return count;
}
int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    int Array[100], length;
    ReadyFillArraywhitNumber(Array, length);
    cout << "The Elements Number " << " ";
    PrintArray(Array, length);
    // MinNumberInArray(Array, length);
    cout << "\nThe Random Sum Array " << SumOfrandomArray(Array, length) << endl;
    return 0;
}
