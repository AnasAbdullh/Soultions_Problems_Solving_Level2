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
void ReadArray(int NumberArray[100], int &Arraylength)
{
    cout << "ENTER Number of the elements" << endl;
    cin >> Arraylength;

    cout << "enter the array elements " << endl;

    for (size_t i = 0; i < Arraylength; i++)
    {
        cout << "elements [" << i + 1 << "] :" << endl;
        cin >> NumberArray[i];
    }
}
void PrintArray(int NumberArray[100], int arraylength)
{
    for (size_t i = 0; i < arraylength; i++)
    {
        cout << NumberArray[i] << " ";
    }
}
int recitesTime(int Number, int check, int array[100])
{
    short count = 0;

    for (size_t i = 0; i < Number; i++)
    {
        if (check == array[i])
        {
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{

    int Array[100], Length, Number;

    ReadArray(Array, Length);
    int NumberCheck = ReadPositiveNumber("enter number check elemnents ");

    int Numberelemntes = recitesTime(Length, NumberCheck, Array);
    cout << " thr Oringale Number ";
    PrintArray(Array, Length);

    cout << "\n the elemntes Number " << Numberelemntes << endl;

    return 0;
}
