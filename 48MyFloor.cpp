#include <iostream>
#include <cmath>

using namespace std;

float GetFarctionsFloor(float Number)
{
    return Number - int(Number);
}

float MyFloor(float Number)
{
    int Intpart;
    Intpart = int(Number);

    float Farction = GetFarctionsFloor(Number);
    //   cout << Farction << endl;

    if (abs(Farction) >= .0)
    {
        if (Number > 0)
            return Intpart;
        else
            return --Intpart;
    }
    else
    {
        return Intpart;
    }
}

float ReadNumber()
{
    float Number;
    cout << "Please enter a Number ?";
    cin >> Number;
    return Number;
}

int main(int argc, char const *argv[])
{

    float Number = ReadNumber();
    cout << (floor(Number)) << endl;
    cout << MyFloor(Number) << endl;

    return 0;
}