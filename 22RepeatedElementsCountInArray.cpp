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
int ArrayElements(int Number)
{
    string txt = "";
    int Element[Number];
    cout << "Enter array elements :" << endl;

    for (short i = 0; i < Number; i++)
    {
        cout << "Elements [" << i + 1 << "]" << endl;
        cin >> Element[i];
        txt += to_string(Element[i]);
    }
    short check = 0;
    cout << " Enter Number check" << endl;
    cin >> check;

    short count = 0;
    for (size_t i = 0; i < Number; i++)
    {
        if (check == Element[i])
        {
            count++;
        }
    }
    cout << txt << endl;
    return count;
}

// int checkNumber(int array[], int Number)
// {
// }
void Printresult()
{
    int readNumber = ReadPositiveNumber("Enter Number");

    cout << ArrayElements(readNumber) << endl;
}

int main(int argc, char const *argv[])
{
    Printresult();

    return 0;
}
