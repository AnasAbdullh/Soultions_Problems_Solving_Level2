#include <cstdlib>
#include <iostream>

using namespace std;

// Function to add an element to an array

// Function to generate a random number within a specified range
int RandomNumber(int from, int to) { return rand() % (to - from + 1) + from; }

// Function to fill an array with random numbers
void FillArrayWithRandomNumbers(int arr[], int &length)
{
    cout << "Enter the number of elements in the array: ";
    cin >> length;

    if (length > 100)
    { // Check array bounds
        cout << "Maximum array size is 100. Please enter a smaller value." << endl;
        length = 100; // Set length to maximum allowed
    }

    for (int i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(-100, 100);
    }
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
int NumberNegativeCount(int arr[100], int length)
{
    short count = 0;

    for (int i = 0; i < length; i++)
    {

        if (arr[i] < 0)
        {

            count++;
        }
    }
    return count;
}
// Main function
int main()
{
    srand((unsigned)time(NULL));

    int arr[100], length = 0;

    FillArrayWithRandomNumbers(arr, length);

    PrintArray(arr, length);

    cout << NumberNegativeCount(arr, length) << endl;

    return 0;
}
