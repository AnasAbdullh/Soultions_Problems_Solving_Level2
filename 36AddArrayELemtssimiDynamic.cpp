#include <iostream>
#include <string>

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

void PrintArray(int Array[], int Length)
{
    for (size_t i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
    cout << "\n";
}

void AddArrayElements(int Arr[], int &i)
{

    i = 0;
    bool check;
    while (true)
    {
        Arr[i] = ReadPositiveNumber("Enter Number ");

        cout << " Do you want to add more Number ?";
        cin >> check;
        i++;
        if (check == 0)
        {
            break;
        }
    }
}

int main(int argc, char const *argv[])
{

    int array[true], i;

    AddArrayElements(array, i);

    PrintArray(array, i);

    return 0;
}