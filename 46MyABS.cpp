#include <iostream>
#include <cmath>

using namespace std;

int ReadNegativeNumber(string Message)
{
    int NumberNegative;
    do
    {
        cout << Message << endl;
        cin >> NumberNegative;
    } while (NumberNegative > 0);

    return NumberNegative;
}

int main(int argc, char const *argv[])
{
    int NumberNegative = ReadNegativeNumber("Enter Negative Number");

    cout << abs(NumberNegative) << endl;
    cout << (NumberNegative) * -1 << endl;

    return 0;
}
