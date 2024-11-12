#include <iostream>
#include <string>

using namespace std;
int ReadNumber()
{
    int Number = 0;

    cout << "\nPlase Enter a number " << endl;
    cin >> Number;

    return Number;
}
void AddTomoreElements(int arr[100], int &length, int Number)
{
    length++;
    arr[length - 1] = Number;
}
void inputToUser(int arr[100], int &length)
{

    bool Check = true;

    do
    {
        AddTomoreElements(arr, length, ReadNumber());
        cout << "do to wants array " << endl;
        cin >> Check;

    } while (Check == 1);
}
void PrintArray(int Array[], int Length)
{
    for (size_t i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
    cout << "\n";
}

int main(int argc, char const *argv[])
{

    int arr[100], length;

    inputToUser(arr, length);

    cout << "\nThe Length Array \n " << length;
    cout << endl;

    PrintArray(arr, length);

    return 0;
}