#include <cmath>
#include <cstdlib>
#include <iostream>

enum enPrimeOrNotPrime
{
  Prime = 1,
  NotPrime = 2
};

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
enPrimeOrNotPrime CheckPrimeNumber(int arr2)
{
  if (arr2 < 2)
    return enPrimeOrNotPrime::NotPrime;
  int M = round(arr2 / 2);
  for (short count = 2; count <= M; count++)
  {
    if (arr2 % 2 == 0)
    {
      return enPrimeOrNotPrime::NotPrime;
    }
  }
  return enPrimeOrNotPrime::Prime;
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
void CopyPrimeNumber(int arr[], int arr2[], int length, int &lengthtwo)
{

  for (int i = 0; i < length; i++)
  {
    if (CheckPrimeNumber(arr[i]) == enPrimeOrNotPrime::Prime)
    {
      AddArrayElement(arr2, lengthtwo, arr[i]);
    }
  }
}

int main()
{
  srand((unsigned)time(NULL));

  int arr[100], length, arr2[100], lengthtwo = 0;

  FillArrayWithRandomNumbers(arr, length);

  PrintArray(arr, length);

  CopyPrimeNumber(arr, arr2, length, lengthtwo);

  PrintArray(arr2, lengthtwo);

  return 0;
}
