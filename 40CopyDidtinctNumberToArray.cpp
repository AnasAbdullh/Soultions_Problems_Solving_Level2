#include <iostream>

using namespace std;

// Function to add an element to an array
void AddArrayElement(int arr[], int &length, int number)
{
    if (length < 100)
    { // Check array bounds
        length++;
        arr[length] = number;
    }
    else
    {
        cout << "Array is full.  Cannot add more elements." << endl;
    }
}

void FillArrayWithRandomNumbers(int arr[100], int &arrlength)
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

    arrlength = 10;
}

// Function to print an array
void PrintArray(int arr[], int length)
{
    
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to copy one array to another
void CopyDidtictNumber(int arr[], int arr2[], int length, int &lengthtwo)
{
    arr2[0] = arr[0];
    for (size_t i = 0; i < length; i++)
    {
        if (arr[i] != arr2[lengthtwo])
        {
            //  arr2[i] = arr[i];
            AddArrayElement(arr2, lengthtwo, arr[i]);
        }
    }
}

int main()
{

    int arr[100], length, arr2[100], lengthtwo = 0;

    FillArrayWithRandomNumbers(arr, length);
    PrintArray(arr, length);

    CopyDidtictNumber(arr, arr2, length, lengthtwo);

    PrintArray(arr2, lengthtwo);

    return 0;
}