#include <iostream>
using namespace std;

float MyFloor(float Number)
{
    if (Number > 0)

        return int(Number);
    else
        return int(Number) - 1;
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
    cout << MyFloor(Number) << endl;
    return 0;
}
