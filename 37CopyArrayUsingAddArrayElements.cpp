#include <cstdlib>
#include <iostream>

using namespace std;
// int ReadNumber()
// {
//     int Number = 0;

//     cout << "\nPlase Enter a number " << endl;
//     cin >> Number;

//     return Number;
// }
void AddArrayElements(int arr[100], int &length, int Number)
{
  length++;
  arr[length - 1] = Number;
}
int RandomNumber(int From, int To)
{
  int randNUmber = rand() % (To - From + 1) + From;
  return randNUmber;
}
void FillArraywhitNumber(int Array[100], int &Length)
{
  cout << "Enter Elements Array " << endl;
  cin >> Length;

  for (size_t i = 0; i < Length; i++)
  {
    Array[i] = RandomNumber(1, 100);
  }
}
void PrintArray(int Array[], int Length)
{
  cout << "\n";
  for (size_t i = 0; i < Length; i++)
  {
    cout << Array[i] << " ";
  }
  cout << "\n";
}
void CopyArray(int arr[100], int arr2[100], int length, int &lengthtwo)
{
  for (short i = 0; i < length; i++)
  {
    AddArrayElements(arr2, lengthtwo, arr[i]);
  }
}

int main(int argc, char const *argv[])
{
  srand((unsigned)time(NULL));

  int arr[100], length, arr2[100], lengthtwo;

  FillArraywhitNumber(arr, length);

  PrintArray(arr, length);

  CopyArray(arr, arr2, length, lengthtwo);

  PrintArray(arr2, lengthtwo);

  return 0;
}
