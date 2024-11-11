#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int Number;
    cin >> Number;
    return Number;
}

int MySqrt(int Number)
{
    for (size_t i = 1; i <= 10; i++)
    {
        if (Number / i == i)
            return i;
    }
    return 0;
}

int main(int argc, char const *argv[])
{

    int Number = ReadNumber();
    cout << sqrt(Number) << endl;
    cout << MySqrt(Number) << endl;

    return 0;
}
