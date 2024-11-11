#include <iostream>
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
    string lengthd = to_string(Num);
    short sum = lengthd.length();
    cout << sum << endl;
}

int main()
{
    int One = ReadPositiveNumber("Enter total Number");
    int Two = ReadPositiveNumber("Enter Numbers ");

    DigitRerncey(One, Two);

    // string sum = to_string(DigitRerncey(One, Two));
    // cout << sum << endl;
}