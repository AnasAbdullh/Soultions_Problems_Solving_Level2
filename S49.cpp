#include <iostream>
#include <cmath>
using namespace std;

float GetFractionsPart(float Number)
{
    return Number - int(Number);
}

float MyCeil(float Number)
{
    if (abs(GetFractionsPart(Number)) > 0)

        if (Number > 0)
            return int(Number) + 1;
        else
            return int(Number);

    else
        return Number;
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

    return 0;
}
