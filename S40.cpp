#include <iostream>

using namespace std;

// Function to add an element to an array
void AddArrayElement(int Number, int arr[100], int &arraylength)
{
    if (arraylength < 100)
    { // Check array bounds
        arraylength++;
        arr[arraylength - 1] = Number;
    }
    else
    {
        cout << "Array is full.  Cannot add more elements." << endl;
    }
}

void FillArray(int arr[100], int &arraylength)
{
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;

    arraylength = 10;
}
short FindNumberPositInArray(int Number, int arr[100], int arraylength)
{
    for (short i = 0; i < arraylength; i++)
    {
        if (arr[i] == Number)
        {
            return i;
        }
    }
    return -1;
}
bool IsNumberInArray(int Number, int arr[100], int arraylength)
{
    return FindNumberPositInArray(Number, arr, arraylength) != -1;
}

// Function to print an array
void PrintArray(int arr[100], int arraylength)
{

    for (int i = 0; i < arraylength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to copy one array to another
void CopyDistrictNumber(int arrSource[100], int arrDestination[100], int Sourcelength, int &DestinationLength)
{

    for (int i = 0; i < Sourcelength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}

int main()
{

    int arrSource[100], Sourcelength = 0, arrDestination[100], DestinationLength = 0;

    FillArray(arrSource, Sourcelength);
    PrintArray(arrSource, Sourcelength);

    CopyDistrictNumber(arrSource, arrDestination, Sourcelength, DestinationLength);
    PrintArray(arrDestination, DestinationLength);

    return 0;
}