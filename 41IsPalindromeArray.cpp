#include <iostream>
#include <string>
using namespace std;

void FillArray(int arr[100], int &arrlength)
{
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;

    arrlength = 6;
}
void PrintArray(int arr[100], int arrlength)
{

    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void RevernceNumber(int arrSource[100], int arrSourceLength, int arrPalindrome[100])
{
    for (size_t i = 0; i < arrSourceLength; i++)
    {
        arrPalindrome[arrSourceLength - i - 1] = arrSource[i];
    }
}

bool CheckPalmindrome(int arrSource[100], int arrSourceLength, int arrPalindrome[100])
{

    for (size_t i = 0; i < arrSourceLength; i++)
    {
        if (arrSource[i] != arrPalindrome[i])
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

    int arrPalindrome[100];
    RevernceNumber(arrSource, arrSourceLength, arrPalindrome);

    if (CheckPalmindrome(arrSource, arrSourceLength, arrPalindrome))
        cout << " Yes Palinderome " << endl;
    else
        cout << " Not " << endl;

    return 0;
}
