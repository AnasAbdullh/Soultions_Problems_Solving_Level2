#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
    float Number;
    cin >> Number;
    return Number;
}

int MySqrt(int Number)
{
   return pow(Number,0.5);
}

int main(int argc, char const *argv[])
{

    float Number = ReadNumber();
    cout << sqrt(Number) << endl;
    cout << MySqrt(Number) << endl;

    return 0;
}
