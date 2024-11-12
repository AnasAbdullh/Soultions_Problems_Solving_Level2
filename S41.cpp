#include <iostream>
#include <string>
using namespace std;

void FillArray(int arr[100], int &arraylength)
{
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;

    arraylength = 6;
}
void PrintArray(int arr[100], int arraylength)
{

    for (int i = 0; i < arraylength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool CheckPalindrome(int arrSource[100], int arrSourceLength)
{

    for (size_t i = 0; i < arrSourceLength; i++)
    {
        if (arrSource[i] != arrSource[arrSourceLength - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{

    int arrSource[100], arrSourceLength = 0;

    FillArray(arrSource, arrSourceLength);
    PrintArray(arrSource, arrSourceLength);

    if (CheckPalindrome(arrSource, arrSourceLength))
        cout << " Yes Palindrome " << endl;
    else
        cout << " Not Palindrome  " << endl;

    return 0;
}
