#include <iostream>
#include <cmath>

using namespace std;

float MyABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;
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

    int Number = ReadNumber();
    cout << MyABS(Number) << endl;
    cout << abs(Number) << endl;

    return 0;
}