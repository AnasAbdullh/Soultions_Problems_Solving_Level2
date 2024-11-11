#include <iostream>
#include <cmath>

using namespace std;

int ReadNegativeNumber(string Message)
{
    int NumberNegitave;
    do
    {
        cout << Message << endl;
        cin >> NumberNegitave;
    } while (NumberNegitave > 0);

    return NumberNegitave;
}

int main(int argc, char const *argv[])
{
    int NumberNegative = ReadNegativeNumber("Enter Negutive Number");

    cout << abs(NumberNegative) << endl;
    cout << (NumberNegative) * -1 << endl;

    return 0;
}
