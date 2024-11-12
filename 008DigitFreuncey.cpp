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

void DigitRerncey(int Number, int Number2)
{

    int Reminder = 0, Num = 0;

    while (Number > 0)
    {
        Reminder = Number % 10;
        Number /= 10;
        if (Number2 == Reminder)
        {
            Num = Num * 10 + Reminder;
        }
    }
    string length = to_string(Num);
    short sum = length.length();
    cout << sum << endl;
}

int main()
{
    int One = ReadPositiveNumber("Enter total Number");
    int Two = ReadPositiveNumber("Enter Numbers ");

    DigitRerncey(One, Two);

    // string sum = to_string(DigitRrcey(One, Two));
    // cout << sum << endl;
}