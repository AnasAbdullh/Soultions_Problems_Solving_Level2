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
void PrintLength(int Num)
{
    string conver = to_string(Num);
    short count = conver.length();

    do
    {
        count--;
        cout << conver[count] << endl;

    } while (count >= 1);

    // for (size_t i = conver.length(); i >= 1; i--)
    // {
    //     cout << conver[i] << endl;
    // }
}
int main()

{

    PrintLength(ReadPositiveNumber("Enter Number"));
    // string f = "1234";
    // short i = 2;
    // cout << f.length() << endl;
    return 0;
}