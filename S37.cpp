#include <cstdlib>
#include <iostream>

using namespace std;

// Function to add an element to an array
void AddArrayElement(int arr[], int &length, int number)
{
  if (length < 100)
  { // Check array bounds
    arr[length] = number;
    length++;
  }
  else
  {
    cout << "Array is full.  Cannot add more elements." << endl;
  }
}

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
  cout << "\nArray elements: ";
  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Function to copy one array to another
void CopyArray(int arr[], int arr2[], int length, int &lengthtwo)
{
  lengthtwo = length; // Set length to length
  for (int i = 0; i < length; i++)
  {
    arr2[i] = arr[i];
    
  }
}

int main()
{
  srand((unsigned)time(NULL));

  int arr[100], length, arr2[100], lengthtwo;

  FillArrayWithRandomNumbers(arr, length);

  PrintArray(arr, length);

  CopyArray(arr, arr2, length, lengthtwo);

  PrintArray(arr2, lengthtwo);

  return 0;
}
