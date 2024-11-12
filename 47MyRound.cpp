#include <iostream>
#include <cmath>

using namespace std;

float GetFractionsRound(float Number)
{
    return Number - int(Number);
}

float MyRound(float Number)
{
    int Intpart;
    Intpart = int(Number);

    float Farction = GetFractionsRound(Number);
    //   cout << Farction << endl;

    if (abs(Farction) >= .5)
    {
        if (Number > 0)
            return ++Intpart;
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
    cout << (round(Number)) << endl;
    cout << MyRound(Number) << endl;

    return 0;
}