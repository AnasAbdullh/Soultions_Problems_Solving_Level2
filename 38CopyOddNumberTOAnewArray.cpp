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
    arr[i] = RandomNumber(1, 100);
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
void AddArrayElements(int arr[100], int &length, int Number)
{
  length++;
  arr[length - 1] = Number;
}

// Function to copy one array to another
void OddNumberInArray(int arr[100], int length, int &OddArrayLength, int OddArray[100])
{

  for (int i = 0; i < length; i++)
  {

    if (arr[i] % 2 != 0)
    {
      AddArrayElements(OddArray, OddArrayLength, arr[i]);
    }
  }
}
// Main function
int main()
{
  srand((unsigned)time(NULL));

  int arr[100], length = 0;

  FillArrayWithRandomNumbers(arr, length);

  PrintArray(arr, length);
  int OddArray[100], OddArrayLength = 0;

  OddNumberInArray(arr, length, OddArrayLength, OddArray);
  PrintArray(OddArray, OddArrayLength);

  return 0;
}
