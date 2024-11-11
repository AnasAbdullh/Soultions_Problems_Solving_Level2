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
bool IsCheckNumbersearch(int length, int arr[100], int lengthCheck, int &count)
{
    for (size_t i = 0; i < length; i++)
    {
        if (arr[i] == lengthCheck)
        {

            return true;
        }
        count++;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    int arr[100], length, check, lengthcheck, count;
    //  cout << "Array 1 elements : ";
    FillArraywhitNumber(arr, length);
    cout << "Array 1 elements : ";
    PrintArray(arr, length);

    check = ReadPositiveNumber("Please enter a number to search for ?");

    if (IsCheckNumbersearch(length, arr, check, count))
    {
        cout << "Number you are looking for is : " << check << endl;
        cout << "The Number Found at position " << count << endl;
        cout << "The Number found its order : " << count + 1 << endl;
    }
    else
    {
        cout << "Number you are looking for is : " << check << endl;
        cout << "The number is not found " << endl;
    }

    return 0;
}