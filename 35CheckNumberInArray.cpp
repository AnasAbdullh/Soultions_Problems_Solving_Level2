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
    cout << " Enter Elements Array " << endl;
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
    cout << "\n";
}
short FindNumberPositiInArray(int Array[100], int length, int FindNumber)
{
    for (short i = 0; i < length; i++)
    {
        if (Array[i] == FindNumber)
        {
            return i;
        }
    }
    return -1;
}
bool checkNumberInArray(int chech)
{
    if (chech == -1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    int arr[100], length, check;

    FillArraywhitNumber(arr, length);
    cout << "Array 1 elements : ";
    PrintArray(arr, length);

    check = ReadPositiveNumber("Please enter a number to search for ?");
    cout << "Number you are looking for is : " << check << endl;

    short Find = FindNumberPositiInArray(arr, length, check);

    if (checkNumberInArray(Find))
    {
        cout << "The number is found " << endl;
    }
    else
    {
        cout << "The number is not found " << endl;
    }
    return 0;
}