#include <iostream>
using namespace std;

float MyCeil(float Number)
{
    if (Number > 0)

        return int(Number) + 1;
    else
        return int(Number) - 1 + 1;
}

float ReadNumber()
{
    float Number;
    cin >> Number;
    return Number;
}

int main(int argc, char const *argv[])
{
    float Number = ReadNumber();
    cout << MyCeil(Number) << endl;

    if (0.3 > 0)
    {
        cout << " i" << endl;
    }

    return 0;
}
